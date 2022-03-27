#include <iostream>
using namespace std;
int main()
{
	int arr[5], sum = 0;
	cout << "enter the numbers" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	cout << "sum" << sum << endl;
	return 0;
}
