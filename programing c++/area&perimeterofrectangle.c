#include <stdio.h>

int main()
{
  float length, breadth, area, perimeter;

  //asking length
  printf("\nEnter the Length of Rectangle : ");
  scanf("%f", &length);

  //asking breadth
  printf("\nEnter the Breadth of Rectangle : ");
  scanf("%f", &breadth);

  //returning area
  area = length * breadth;
  printf("\nArea of Rectangle : %f", area);

  // returning perimeter
  perimeter = 2 * (length + breadth);
  printf("\nPerimeter of Rectangle : %f", perimeter);

  return 0; // execution compeleted
}
