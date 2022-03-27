#include <stdio.h>
int main()

{
    int marks = 0;
    printf("Enteryourmarks?");
    scanf("%d", &marks);

    if (marks <= 100 && marks == 96)
    {
        printf("Congrats!youscoredgradeA...");
    }
    else if (marks > 60 && marks <= 85)
    {
        printf("YouscoredgradeB+...");
    }
    else if (marks > 40 && marks <= 60)
    {
        printf("YouscoredgradeB...");
    }
    else if (marks > 30 && marks <= 40)
    {
        printf("YouscoredgradeC...");
    }
    else
    {
        printf("Sorryyouarefail...");
    }
}