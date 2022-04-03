
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
void answer()
{
    int n, num1, num2;
    cin >> n >> num1 >> num2;

    if (max(num1, num2) - min(num1, num2) > 2 || max(num1, num2) - min(num1, num2) <= 0)
        cout << 0 << endl;
    else if (min(num1, num2) == 1, max(num1, num2) == n, (max(num1, num2) - min(num1, num2) == 2))
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t-- > 0)
        answer();
    return 0;
}
