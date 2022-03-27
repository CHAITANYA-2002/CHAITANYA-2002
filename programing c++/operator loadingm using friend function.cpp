using namespace std;
#include <conio.h>
#include <iostream>
class Complex
{
private:
	int a;
	int b;

public:
	void setData(int x, int y)
	{

		a = x;
		b = y;
	}

	void showData()
	{

		cout << "\na=" << a << "b" << b;
	}
};

int main()
{

	system("cls");
	Complex c1, c2, c3;
	c1.setData(3, 4);
	c2.setData(5, 6);
	c3 = c1 + c2;
	c3.showData();
	getch();
}
