#include <stdio.h>
int main()
{
	int r, n , reversed , temp;
	printf("ENTER THE NUMBER");
	scanf("%d" , &n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		reversed = (reversed*10)+r;
		n=n/10;


	}
	printf("REVERSED NUMBER IS %d" , reversed);
	return 0;
}


