using namespace std
#include <conio.h>
#include <iostream>

	struct book
{
private:
	int bookid;
	char title[20];
	float price;

public:
	void input()
	{

		cout << "Enter bookid , title and the price";
		cin >> bookid >> title >> price;
		if (bookid < 0)
			bookid = -bookid;
	}

	void display()
	{
		cout << "\n"
			 << bookid << " " << title << " " << price;
	}
};

void main()
{

	system("cls");
	book b1;
	b1.input();
	b1.display();

	getch();
}
