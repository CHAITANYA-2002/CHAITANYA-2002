#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (marks <= 100)
    {
        cout << "A";
    }
    else if (marks <= 79)
    {
        cout << "B";
    }
    else if (marks <= 59)
    {
        cout << "C";
    }
    else if (marks <= 49)
    {
        cout << "D";
    }
    else if (marks <= 44)
    {
        cout << "E";
    }

    return 0;
}
