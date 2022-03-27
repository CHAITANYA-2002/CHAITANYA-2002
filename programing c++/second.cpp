using namespace std;

#include <conio.h>
#include <iostream>
int add(int, int);
int main()
{
	system("cls");

	int a, b;
	cout << "Enter two numbers";
	cin >> a >> b;
	cout << "sum is" << add(a, b);
	getch();
}
int add(int x, int y)
{
	return (x + y);
}
