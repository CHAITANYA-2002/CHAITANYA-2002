
#include <iostream>
using namespace std;
template <class Sky>
class example
{
    Sky n1, n2;

public:
    example(Sky x, Sky y)
    {
        n1 = x;
        n2 = y;
    }
    int Sum()
    {
        return (n1 + n2);
    }
};
int main()
{
    example<int> obj1(10, 20);
    cout << obj1.Sum() << endl;
    example<int> obj2(1.4f, 2.5f);
    cout << obj2.Sum() << endl;
}
