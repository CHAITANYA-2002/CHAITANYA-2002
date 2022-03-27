using namespace std;
#include <conio.h>
#include <iostream> //early binding is binding at the time of compiling
int area(int, int);
float area(int);
int main()

{
	//Area here is an example of funcion overloading that is calculating area and dono ke liye same hi naam rakh diya alag alag rkahne ki need nhi hai.
	system("cls");
	int r;
	cout << "enter the radius of the circle";
	cin >> r;
	float A = area(r); //calling the function
	cout << "\n Area of the circle is " << A;
	int l, b, a;
	cout << "Enter length and the breadth of the rectangle";
	cin >> l >> b;
	a = area(l, b);
	cout << "Area of the rectangle is " << a;
	getch();
}

float area(int R)
{

	return (3.14 * R * R);
}

int area(int L, int B)

{

	return (L * B);
}
