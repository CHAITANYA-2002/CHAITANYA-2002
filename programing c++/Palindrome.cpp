#include <stdio.h>
int main()

{

    int a, sum = 0, num, temp;
    num = temp;

    printf("Enter the number to know if the number is a palindrome or not");
    scanf("%d", &num);

    while (num > 0)
    {

        a = sum % 10;
        sum = (sum * 10) + a;
        num = num / 10;
    }

    if (sum == num)
    {

        printf("The Entered number is a palindrome");
    }

    else
    {

        printf("The number enterd is nort a palindronme nyumber");
    }

    return 0;
}