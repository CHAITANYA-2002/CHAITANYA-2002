#include <iostream>
using namespace std;

int main()
{
	int n, m, o;
	cout << "n = ";
	cin >> n;
	m = 3 * n;
	o = 4 * n;


	for ( int i = 0; i < m; i++) //loop for columns printing
	{
		for ( int j = 0; j < n; j++) //loop for rows printing
		{
			cout << "*"; //prints star character
		}
		cout << endl; //print value in new line
	}

	
for ( int i = 0; i < n; i++) //loop for columns printing
	{
		for ( int j = 0; j < o; j++) //loop for rows printing
		{
			cout << "*"; //prints star character
		}
		cout << endl; //print value in new line
	}

	
	
	return 0;
}
