#include <stdio.h>

int main()
{

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if ((i == 1) || (j == 7))

                printf("\n*******");

            if ((i == 2) || (j == 6))

                printf("\n*** ***");

            if ((i == 3) || (j == 4))

                printf("\n**   **");

            if ((i == 4) || (j == 7))

                printf("\n*******");

            else

                printf("");
        }
    }
    return 0;
}
