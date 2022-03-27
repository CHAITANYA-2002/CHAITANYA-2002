#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <map>
#include <stdexcept>
#include <numeric>
#include <iterator>

enum DisjointSetUnionParameters
{
    USE_PATH_COMPRESSION,
    USE_SUBTREE_MERGE_HEURISTICS
};

std::set<DisjointSetUnionParameters> DefaultDisjointSetUnionParameters()
{
    return std::set<DisjointSetUnionParameters>({USE_PATH_COMPRESSION, USE_SUBTREE_MERGE_HEURISTICS});
}

struct DisjointSetNode
{
    DisjointSetNode()
    {
        this->parent = this;
        this->subtree_size = 1;
    }
    ~DisjointSetNode() {}
    DisjointSetNode *parent;
    size_t subtree_size;

    DisjointSetNode *equivalence_class_parent()
    {
        DisjointSetNode *class_parent = this;

        while (class_parent != class_parent->parent)
        {
            class_parent = class_parent->parent;
        }

        return class_parent;
    }

    void set_parent(DisjointSetNode *new_parent)
    {
        new_parent->subtree_size += this->subtree_size;
        this->parent = new_parent;
    }
};

template <class T>
class DisjointSetUnion
{
public:
    DisjointSetUnion(
        size_t expected_size = 100000,
        const std::set<DisjointSetUnionParameters> &parameters =
            DefaultDisjointSetUnionParameters()) : parameters(parameters)
    {
        this->nodes.reserve(expected_size);
        this->equivalence_classes = 0;
    }

    ~DisjointSetUnion()
    {
        for (auto &node : this->nodes)
        {
            delete node;
        }
        this->nodes.clear();
    }

    bool contains(const T &t)
    {
        return enumeration.find(t) != enumeration.end();
    }

    void add(const T &t)
    {
        if (this->contains(t))
        {
            return;
        }
        size_t index = this->enumeration.size();
        this->enumeration.insert({t, index});
        this->nodes.push_back(new DisjointSetNode());
        this->equivalence_classes++;
    }

    size_t get_class_subtree_size(const T &t)
    {
        DisjointSetNode *class_parent = this->get_node_class_parent(t);
        return class_parent->subtree_size;
    }

    size_t get_equivalence_classes_count()
    {
        return this->equivalence_classes;
    }

    void merge(const T &t1, const T &t2)
    {
        DisjointSetNode *u = this->get_node_class_parent(t1);
        DisjointSetNode *v = this->get_node_class_parent(t2);

        if (this->use_subtree_merge_heuristics())
        {
            if (u->subtree_size < v->subtree_size)
            {
                std::swap(u, v);
            }
        }
        if (u != v)
        {
            this->equivalence_classes--;
            v->set_parent(u);
        }
    }

private:
    DisjointSetNode *get_node(const T &t)
    {
        return this->nodes[this->get_node_index(t)];
    }

    DisjointSetNode *get_node_class_parent(const T &t)
    {
        return this->get_node_class_parent(this->get_node(t));
    }

    DisjointSetNode *get_node_class_parent(DisjointSetNode *node)
    {
        DisjointSetNode *class_parent = node->equivalence_class_parent();

        if (this->use_path_compression())
        {
            while (node != class_parent)
            {
                auto next_node = node->parent;
                node->parent = class_parent;
                node = next_node;
            }
        }

        return class_parent;
    }

    size_t get_node_index(const T &t)
    {
        if (!this->contains(t))
        {
            throw std::out_of_range("DisjointSetUnion out of range");
        }
        return this->enumeration[t];
    }

    bool use_path_compression()
    {
        return this->has_parameter(USE_PATH_COMPRESSION);
    }

    bool use_subtree_merge_heuristics()
    {
        return this->has_parameter(USE_SUBTREE_MERGE_HEURISTICS);
    }

    bool has_parameter(DisjointSetUnionParameters parameter)
    {
        return this->parameters.find(parameter) != this->parameters.end();
    }

    std::unordered_map<T, size_t> enumeration;
    size_t equivalence_classes;
    std::vector<DisjointSetNode *> nodes;
    std::set<DisjointSetUnionParameters> parameters;
};

size_t solve_instance()
{
    int nodes, edges;
    int edge_cost, node_cost;
    std::cin >> nodes >> edges >> node_cost >> edge_cost;

    DisjointSetUnion<int> dsu(nodes);
    for (int i = 1; i <= nodes; ++i)
    {
        dsu.add(i);
    }
    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        std::cin >> u >> v;
        dsu.merge(u, v);
    }

    size_t connected_components = dsu.get_equivalence_classes_count();
    size_t cost = node_cost + (connected_components - 1) * std::min(node_cost, edge_cost);
    return cost;
}

int main()
{
    int q;
    std::cin >> q;
    for (int i = 0; i < q; ++i)
    {
        std::cout << solve_instance() << "\n";
    }
}