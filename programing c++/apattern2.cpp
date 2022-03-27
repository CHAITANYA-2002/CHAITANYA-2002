#include <stdio.h>

// main function
int main()
{
    int a, b;

    printf("Enter the value of a:");
    scanf("%d", &a);

    // reqiured condition

    b = a % 6;

    switch (b)
    {
    case 1:
    case 2:
        //printing yay window
        printf("Yay! Window!");
        break;

    case 3:
    case 4:
        //printing fml middle
        printf("FML! Middle!");
        break;

    default:
        //printing aool aisle as the default statement
        printf("Cool! Aisle!");
    }

    return 0;
}