// write the c program to find the gratest number b

#include <stdio.h>

int main()
{
  int x, y, z;

  //Ask user to input any three integer numbers
  printf("\nEnter value of number1, number2 and number3:");

  //Store input values in variables for comparsion
  scanf("%d %d %d", &x, &y, &z);

  if ((x > y) && (x > z))
    printf("\n %d is greatest", x);

  if ((y > z) && (y > x))
    printf("\n %d is greatest", y);

  if ((z > x) && (z > y))
    printf("\n %d is greatest", z);

  if ((x == y) && (x == z))
    printf("\n all are same");

  else if (x == y)
    printf("\n  %d and %d and are equal ", x, y);

  else if (x == z)
    printf("\n  %d and %d and are equal ", z, x);

  else if (y == z)
    printf("\n  %d and %d and are equal ", y, z);

  return 0; // execution of the code compeleted
}
