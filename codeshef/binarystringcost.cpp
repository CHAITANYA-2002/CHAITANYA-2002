
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, y1 = 0, y0 = 0, i = 0, x, y;
        string str;
        cin >> n >> x >> y;
        cin >> str;
        while (str[i] != '\0')
        {
            str[i] == '1' ? y1++ : y0++;
            i++;
        }
        if (y1 > 0 && y0 > 0)
            cout << min(x, y) << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
