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
void solve()
{
    
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}

class Solution
{
public:
    int equalSum(int N, vector<int> &A)
    {
        long long sum = accumulate(begin(A), end(A), 0);
        int ans = -1;
        long long leftsum = A[0];
        sum -= A[0];
        if (sum == 0)
            return 1;
        for (int i = 1; i < N - 1; i++)
        {
            sum -= A[i];
            if (leftsum == sum)
            {
                ans = i + 1;
                break;
            }
            leftsum += A[i];
        }
        return ans;
    }
};

#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int x = 1;
    while (k > 0)
    {
        if (k % 2 == 0)
        {
            x *= 2;
            k -= x;
        }
        else
        {
            k -= x;
        }
    }

    if (k == 0)
    {
        cout << x << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int x = 1;
    bool found = false;

    while (!found && x <= k)
    {
        int currScore = x;
        int numOps = 0;

        while (currScore < k)
        {
            currScore += x * 2;
            x *= 2;
            numOps++;
        }

        if (currScore == k && numOps >= 2)
        {
            found = true;
        }
        else
        {
            x /= 2;
        }
    }

    if (found)
    {
        cout << x << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int x = 1;
    bool found = false;

    while (!found && x <= k)
    {
        int currScore = x;
        int numOps = 0;

        while (currScore < k)
        {
            int diff = k - currScore;

            if (diff <= x)
            {
                currScore += diff;
            }
            else
            {
                currScore += x * 2;
                x *= 2;
            }

            numOps++;
        }

        if (currScore == k && numOps >= 2)
        {
            found = true;
        }
        else
        {
            x /= 2;
        }
    }

    if (found)
    {
        cout << x << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int x = 1;
    bool found_x = false;

    while (x <= k)
    {
        int score = 0;
        int tmp_x = x;

        while (score < k)
        {
            score += tmp_x;
            tmp_x *= 2;
            if (score == k)
            {
                found_x = true;
                break;
            }
        }
        if (found_x)
        {
            break;
        }
        x++;
    }

    if (found_x)
    {
        cout << x << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;

    int x = 1;
    bool found_x = false;

    while (x <= k)
    {
        int diff = k - x;
        if (diff % (x * 2) == 0)
        {
            found_x = true;
            break;
        }
        x *= 2;
    }

    if (found_x)
    {
        cout << x << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

typedef long long int ll;

class Solution
{
public:
    ll acceptTheChallenge(int n)
    {
        ll k;
        cin >> k;
        ll lo = 1, hi = k;
        ll ans = -1;

        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            ll sum = mid;
            ll x = mid;

            while (sum < k)
            {
                x *= 2;
                sum += x;
            }

            if (sum == k)
            {
                ans = mid;
                hi = mid - 1;
            }
            else if (sum > k)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.acceptTheChallenge(n) << endl;
    return 0;
}
