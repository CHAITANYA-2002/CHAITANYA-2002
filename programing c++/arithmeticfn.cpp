#include <stdio.h>
// function declaration
int sum();
int sub();
int mul();
int div();

int main()
{

  int result1;
  int result2;
  int result3;
  int result4;

  printf("\nPerforming Arithmetic operations for two numbers:");

  result1 = sum();  
  result2 = sub();
  result3 = mul();
  result4 = div();

  printf("%d", result1);

  printf("%d", result2);

  printf("%d", result3);

  printf("%d", result4);
}

int sum()

{

  int a, b;

  printf("\nEntertwonumbers");

  scanf("%d%d", &a, &b);

  return a + b;
}

int sub()

{

  int a, b;

  printf("\nEntertwonumbers");

  scanf("%d%d", &a, &b);

  return a - b;
}

int mul()

{

  int a, b;

  printf("\nEntertwonumbers");

  scanf("%d%d", &a, &b);

  return a * b;
}

int div()

{

  int a, b;

  printf("\nEntertwonumbers");

  scanf("%d%d", &a, &b);

  return a / b;
}
