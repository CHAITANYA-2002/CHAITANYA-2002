// write the c program to find the gratest number b

#include <stdio.h>
using namespace std;

int main()
{
  int x, y, z;

  //Ask user to input any three integer numbers
  cout << "\nEnter value of number1, number2 and number3:"

      //Store input values in variables for comparsion
      cin("%d %d %d", &x, &y, &z);

  if ((x > y) && (x > z))
    cout(x);

  if ((y > z) && (y > x))
    cout("\n %d is greatest", y);

  if ((z > x) && (z > y))
    cout("\n %d is greatest", z);

  if ((x == y) && (x == z))
    cout("\n all are same");

  else if (x == y)
    cout("\n  %d and %d and are equal ", x, y);

  else if (x == z)
    cout("\n  %d and %d and are equal ", z, x);

  else if (y == z)
    cout("\n  %d and %d and are equal ", y, z);

  return 0; // execution of the code compeleted
}
