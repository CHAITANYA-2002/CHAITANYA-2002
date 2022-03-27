#include <stdio.h>
int main(void)
{
	int num;
	printf("Enter your mark ");
	scanf("%d", &num);
	printf(" You entered %d", num); // printing outputs

	if (num > 60)
	{
		printf(" You got A grade"); // printing outputs
	}
	else if ((num <= 60) && (num >= 45))
	{ // Note the space between else & if
		printf(" You got B grade");
	}
	else if ((num < 45) && (num >= 36))
	{
		printf(" You got C grade");
	}
	else if (num < 36)
	{
		printf(" You Failed in this exam");
	}
	return 0;
}
