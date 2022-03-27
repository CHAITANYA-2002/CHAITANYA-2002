//objective write a c program to display your marksheet

#include <stdio.h>

int main()
{
     float rollno, english, hindi, maths, science, sst, percentage, total;

     printf("Enter your Roll No:");
     scanf("%f", &rollno);

     printf("Enter marks of english:");
     scanf("%f", &english);

     printf("Enter marks of hindi:");
     scanf("%f", &hindi);

     printf("Enter marks of maths:");
     scanf("%f", &maths);

     printf("Enter marks of science:");
     scanf("%f", &science);

     printf("Enter marks of sst:");
     scanf("%f", &sst);

     total = english + hindi + maths + science + sst;
     printf("Total marks obtained by the student is: %f", total);

     percentage = total / 500 * 100;
     printf("\nPercentage obtained by the student is: %f", percentage);

     return 0;
}
