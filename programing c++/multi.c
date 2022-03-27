#include <stdio.h>

int main()

{

   int a, b, sum;

   //asking for the first number

   printf("Enter the value of a: ");
   scanf("%d", &a);

   // asking for second number

   printf("Enter the value of b : ");
   scanf("%d", &b);

   //performing the sum of the two values

   sum = a * b;

   printf("%d", sum);

   return 0;
}
