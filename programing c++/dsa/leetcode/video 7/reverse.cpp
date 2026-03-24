#include <bits/stdc++.h>
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
    int x;
    int ans = 0;
    int digit;
    cin >> digit;

    while (x != 0)
    {

        // case  1 : reverse the number simply wiht sign

        int digit = x % 10;

        // case  2 : ifi the range is in between 2^31 and 2^31-1 then the number is accepted
        /*

        now if we see here in the provided code that integer is denooted ny digit
             agar ab mai jo lb hai usko multiply kr dun 10 se in line 9 then vo rnge me hai  ??  yes hai bhaee


             lekin agar mai ub ko kru to vo kya aega (2^31 * 10 ) -10  ab ye jo number hai vo to bada hno gya na yaar jo apan ko given range hai usse

             and because of this apan kya karenge na ki jo bhi ans hai use apan jo hai na range / 10 ke beech me laenge ??? shi hai


             */

        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }

        ans = (ans * 10) + digit;
        x = x / 10;
    }

    return ans;

    return 0;
}
