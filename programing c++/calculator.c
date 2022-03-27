#include <stdio.h>
int main()

{
   float a, b, sum, mul, div, sub;

   //asking for the first number
   printf("Enter the value of a: ");
   scanf("%f", &a);

   // asking for second number
   printf("Enter the value of b : ");
   scanf("%f", &b);

   sum = a + b;
   //returning the sum of the two values
   printf("\n the sum of the two values is: %f", sum);

   mul = a * b;
   //returing the multiplication of two values
   printf("\n the  multiplication of two values is: %f", mul);

   div = a / b;
   //returning the division of two values
   printf("\n the division of two values is:  %f", div);

   sub = a - b;
   //returning the  the subtraction of two values
   printf("\n the subtraction of two values is: %f", sub);

   return 0; // execution finishes with retun 0
}
