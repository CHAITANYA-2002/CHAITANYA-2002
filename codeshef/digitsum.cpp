
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
#define eb emplace_back
#define f first
#define s second
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m, n, i;
        cin >> n;
        ll x = n + 1, k;
        ll s1 = 0, s2 = 0;
        ll a = n;
        while (n != 0)
        {
            s1 = s1 + n % 10;
            n = n / 10;
        }
        int flag = 0;
        if (x > a)
        {
            ll p = x;
            while (p != 0)
            {
                s2 = s2 + p % 10;
                p = p / 10;
            }
            if ((s1 % 2 == 0 && s2 % 2 != 0) || (s1 % 2 != 0 && s2 % 2 == 0))
            {
                cout << x << endl;
                flag = 1;
            }
            else
            {
                x++;
            }
        }
        else
            x++;
        if (flag == 0)
            cout << x << endl;
    }
    return 0;
}
