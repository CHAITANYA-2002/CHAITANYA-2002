using namespace std;
#include <iostream>
#include <conio.h>
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
		cout << "\a=" << a << "b=" << b;
	}

	Complex operator-()
	{
		Complex temp;

		temp.a = -a;
		temp.b = -b;
		return (temp);
	}
};

int main()

{

	system("cls");
	Complex c1, c2;
	c1.setData(3, 4);
	c2 = -c1;
	c2.showData();

	getch();
}
