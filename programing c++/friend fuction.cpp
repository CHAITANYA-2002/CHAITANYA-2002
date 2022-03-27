using nasmespace std;

#include <conio.h>
#iclude < iostream>

class Complex
{
private:
	int a, b;

public:
	void setData(int x, int y)
	{

		a = x;
		b = y;
	}

	void showData()

	{

		cout << "\na=" << a << "b=" << b;
	}
	friend void fun;
};

void fun(Complex c)
{
	cout << "sum is" << c.a + c.b;
}

int main()

{

	system("cls");
	Complex c1, c2, c3;
	c1.setData();
	fun(c1);
	getch();
}
