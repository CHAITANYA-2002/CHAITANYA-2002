#include <iostream>
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
