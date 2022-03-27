#include <iostream>
using namespace std;

int main()
{
	int arr[3][3] = {(
	1,2,3) ,{4,5,6} ,{7,8,9}
	};

int * const p  = arr[0];
for (int i=0; i<3; i++)

	cout << *(p+3*i+1) << " ";
	return 0;

}



