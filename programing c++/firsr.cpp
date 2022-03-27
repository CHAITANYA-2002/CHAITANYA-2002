using namespace std;
#include <stdlib.h>
#include <conio.h>
#include <iostream>
int add(int, int);
int main()

{
    //clrscr();

    system("cls");
    int a, b;
    cout << "Enter two numbwers";
    cin >> a >> b;
    cout << "The sum of the given two numbers is" << add(a, b);
    getch();
}
int add(int x, int y)
{
    return (x + y);
}
