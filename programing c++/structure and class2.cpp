using namespace std;
#include <conio.h>

#include <iostream>

class Complex

{

private:
	int a, b;

public:
	void set_data(int x, int y)
	{

		a = x;
		b = y;
	}
	void show_data()
	{
		cout << "\na=" << a << " b=" << b;
	}
};

int main()
{

	system("cls");
	Complex c1;
	c1.set_data(3, 4);
	c1.show_data();
	getch();
}
