#include <stdio.h>
int main()

{

   float a, b, sum;

   //asking for the first number

   printf("Enter the value of a: ");
   scanf("%f", &a);

   // asking for second number

   printf("Enter the value of b : ");
   scanf("%f", &b);

   //performing the sum of the two values

   sum = a + b;

   printf("%f", sum);

   return 0; // marks the end of execution of the code
}
