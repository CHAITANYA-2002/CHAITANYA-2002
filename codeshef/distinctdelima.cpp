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

int main(int argc, char const *argv[])
{

    ll t, n, y = 0, x = 1;
    ll s = 0;
    cin >> t;
    while (t--)
    {

        cin >> n;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
        }

        while (s > 0)
        {
            s -= x;
            y += 1;
            x += 1;
        }
        if (s < 0)
            cout << y - 1 << endl;
        else
            cout << y << endl;
    }

    return 0;
}