#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        /* code */
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int mx = 0;
        if (a != x && a != y)
        {
            mx++;

            /* code */
        }

        if (b != x && b != y)

        {

            mx++; /* code */
        }
        cout << mx << endl;
    }

    return 0;
}
