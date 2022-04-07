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
    string s;
    cin >> s;
    int n = s.length();
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int val = (s[i] - '0') * 10 + (s[j] - '0');
            if (val % 25 == 0)
            {
                ans = min(ans, j - i - 1 + n - j - 1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
