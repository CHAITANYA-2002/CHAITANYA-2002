#include <stdio.h>

int main()
{
	int i, j, k;
	int rows;
	printf("Enter the number of rows:");
	scanf("%d", &rows);
	for (i = rows; i >= 1; i--)
	{
		for (j = 1; j <= rows; j++)
		{
			if (j <= i)
				printf("*");
			else
				printf(" ");
		}
		for (j = rows; j >= 1; j--)
		{
			if (j <= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= rows; j++)
		{
			if (j <= i)
				printf("*");
			else
				printf(" ");
		}
		for (j = rows; j >= 1; j--)
		{
			if (j <= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
