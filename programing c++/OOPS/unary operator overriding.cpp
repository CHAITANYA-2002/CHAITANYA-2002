// C++ program to demonstrate working of unary increment
// and decrement operators
#include <iostream>
using namespace std;

int main()
{
	// Post increment
	int a = 1;
	cout << "a value: " << a << endl;
	int b = a++;
	cout << "b value after a++ : " << b << endl;
	cout << "a value after a++ : " << a << endl;

	// Pre increment
	a = 1;
	cout << "a value:" << a << endl;
	b = ++a;
	cout << "b value after ++a : " << b << endl;
	cout << "a value after ++a : " << a << endl;

	// Post decrement
	a = 5;
	cout << "a value before decrement: " << a << endl;
	b = a--;
	cout << "b value after a-- : " << b << endl;
	cout << "a value after a-- : " << a << endl;

	// Pre decrement
	a = 5;
	cout << "a value: " << a << endl;
	b = --a;
	cout << "b value after --a : " << b << endl;
	cout << "a value after --a : " << a << endl;

	return 0;
}
