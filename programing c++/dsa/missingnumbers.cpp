#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int arr[4];
		for (int i = 0; i < 4; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 4);
		long long int tmp1 = (arr[2] + arr[0]) / 2;
		long long int y1 = arr[2] - tmp1;
		long long int tmp2 = (arr[2] + arr[0]) / 2;
		long long int y2 = arr[2] - tmp2;
		long long int tmp3 = (arr[3] + arr[0]) / 2;
		long long int y3 = arr[3] - tmp3;
		long long int tmp4 = (arr[3] + arr[0]) / 2;
		long long int y4 = arr[3] - tmp4;
		if ((tmp1 % 1 == 0) && (tmp1 != 0) && (y1 % 1 == 0) && (y1 != 0))
			if ((tmp1 / y1 == arr[1]) && (tmp1 * y1 == arr[3]) && (tmp1 >= 1) && (y1 >= 1) )
			{
				cout << tmp1 << " " << y1 << endl;
				continue;
			}
		if ((tmp2 % 1 == 0) && (tmp2 != 0) && (y2 % 1 == 0) && (y2 != 0))
			if ((tmp2 / y2 == arr[0]) && (tmp2 * y2 == arr[3]) && (tmp2 ,y2 >= 1) )
			{
				cout << tmp2 << " " << y2 << endl;
				continue;
			}
		if ((tmp3 % 1 == 0) && (tmp3 != 0) && (y3 % 1 == 0) && (y3 != 0))
			if ((tmp3 / y3 == arr[1]) && (tmp3 * y3 == arr[2]) && (tmp3 >= 1) && (y3 >= 1) )
			{
				cout << tmp3 << " " << y3 << endl;
				continue;
			}
		if ((tmp4 % 1 == 0) && (tmp4 != 0) && (y4 % 1 == 0) && (y4 != 0))
			if ((tmp4 / y4 == arr[0]) && (tmp4 * y4 == arr[2]) && (tmp4 >= 1) && (y4 >= 1) )
			{
				cout << tmp4 << " " << y4 << endl;
				continue;
			}
		cout << "-1 -1" << endl;
		return 0;
	}
}
