#include <iostream>
#include <vector>
#include <algorithm>
// #include <utility>
#include <string>
#include <bitset>
using namespace std;
vector<vector<int> > a(100001,vector<int>());
bitset<100001> visited;
unsigned long long int cc(int u){
    if(visited[u])return 0;
    unsigned long long int count=1;
    visited[u]=1;
    for(int i:a[u])
        count+=cc(i);
    return count;
}
int main(){
    int q;
    cin>>q;
    while(q--){;
        unsigned long long int n,m,clib,croad;
        cin>>n>>m>>clib>>croad;
        for(int i=1;i<=n;i++)
            a[i].clear();
        visited.reset();
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        unsigned long long int ans=0;
        if(clib<=croad){
            ans=n*clib;
        }
        else{
            for(int i=1;i<=n;i++){
                if(!visited[i]){
                    unsigned long long int numcity=cc(i);
                    // cout<<i<<' '<<numcity<<' ';
                    ans+=clib+(numcity-1)*croad;
                }
            }
        }
        cout<<ans<<endl;

    }
}

