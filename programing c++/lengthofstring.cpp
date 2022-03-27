#include <stdio.h>
int main()

{
	int i=0;
	char str[20] , *pt;
	printf("ENTER ANY STRING BELOW THE LIMIT OF 20 CHARECTERS:");
	scanf("%s" , &str);
	pt=str;
	while(*pt != NULL)
	{
		i++;
		pt++;
			
	}
	printf("LENGTH OF THE STRING IS: %d" , i);
	
	return 0;
	
}
