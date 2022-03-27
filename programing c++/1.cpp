using namespace std;

#include <conio.h>

#include <iostream>

int area(int, int);
float area(int);
int main()
{
	system("cls");

	int r;
	cout << "Enter the radius of the circle";

	cin >> r;
	float A = area(r);

	cout << " Area of circle is " << A;
	int l, b, a;
	cout << " enter length and the breadth of the rectangle";
	cin >> l >> b;
	a = area(l, b);
	cout << "Area of rectangle is" << a;

	getch();
}
