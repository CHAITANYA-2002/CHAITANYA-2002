#include <stdio.h>
 
int main()
{
   int  c, d, first[3][3], second[3][3], sum[3][3];
 
 
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < 3; c++)
      for (d = 0; d < 3; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < 3; c++)
      for (d = 0 ; d < 3; d++)
         scanf("%d", &second[c][d]);
   
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < 3; c++) {
      for (d = 0 ; d < 3; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}

