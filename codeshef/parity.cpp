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
        int s, n = 0, m;
        string str;

        cin >> s >> str;
        for (int i = 0; i < s; i++)
        {
            if (str[i] == '0')
            {
                n = n + 1;
            }
        }
        m = s - n;
        if (n = m)
        {
            cout << n << endl;
        }
        else if (n < m)
        {
            n++;

            cout << n << endl;
        }
        else if (n > m)
        {

            m++;

            cout << m << endl;
        }
    }

    return 0;
}

void solve(){
    int t;
    cin >> t;
    
}