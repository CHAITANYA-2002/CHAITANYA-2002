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

int main()
{
    int t, n, m, k;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> k;
        if (n <= (m - k))

        {

            cout << "yes" << endl;
        }

        else
        {
            cout << "no" << endl;
        }
    }

    // your code goes here
    return 0;
}