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

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        /* code */

        int d;
        int f = 0;
        string n;
        int i;

        cin >> d;
        for (i = 0; i < d; i++)
        {
            /* code */
            cin >> n[i];
        }
        if (n[i] == '0' || n[i] == '5')
        {
            /* code */ f = 1;
            break;
        }
        if (f == 1)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }
    return 0;
}