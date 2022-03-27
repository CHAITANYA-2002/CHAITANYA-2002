using namespace std;
#include <conio.h>
#include <iostream>

struct book
{
	int bookid;
	char title[20];
	float price;
};
void display(book);
book input();
int main()
{
	system("cls");
	book b1;
	b1 = input();
	display(b1);
	getch();
}

void display(book b)
{
	cout << "\n"
		 << b.bookid << "" << b.title << " " << b.price;
}

book input()
{
	book b;

	cout << "Enter book id , title and price of the book";
	cin >> b.bookid >> b.title >> b.price;

	return (b);
}
