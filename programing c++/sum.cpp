#include <iostream>
using namespace std;

int main()
{

    int sum();

    {
        int a, b;
        cout << "Enter th value for a:" << endl;
        cin >> a;
        cout << "Enter the value for b:" << endl;

        cin >> b;
    }
    int multiplication();

    {
        int a, b;
        cout << "Enter th value for a:" << endl;
        cin >> a;
        cout << "Enter the value for b:" << endl;

        cin >> b;
    }
    int division();

    {
        int a, b;
        cout << "Enter th value for a:" << endl;
        cin >> a;
        cout << "Enter the value for b:" << endl;

        cin >> b;
    }
    int subtract();
    {
        int a, b;
        cout << "Enter th value for a:" << endl;
        cin >> a;
        cout << "Enter the value for b:" << endl;

        cin >> b;
    }
    char ch[30];
    cout << "Enter the application you want to perform :" << endl;
    cin >> ch >> endl;
    if (ch == "sum")
    {

        cout << a + b << endl;
    }

    if (ch == "division")
    {

        cout << a / b << endl;
    }

    if (ch == "multiplication")
    {
        cout << a * b << endl;
    }

    if (ch == "subtraction")
    {
        cout << a - b << endl;
    }

    return 0;
}