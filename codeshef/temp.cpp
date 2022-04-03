#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define inf 1000000000000000001;
#define all(c) c.begin(), c.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
const int mod = 998244353;
int main()
{

    ll n, k;
    ll t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        /* code */

        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {

            ll y;
            cin >> y;
            a[i] = y;
        }
    }

    sort(a.begin(), a.end());
    if (k >= n)

    {
        cout << a[n - 1] << endl;
    }
    else
    {
        cout << a[k + 1];
    }
    return 0; 
}