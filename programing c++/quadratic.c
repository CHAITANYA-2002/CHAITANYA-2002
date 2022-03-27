// objective :  Print the roots of the quadratic eqaution where the coefficients are goiven by the user

#include <math.h> // library used for mathematical  operations
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf(" Enter coefficients a, b and c: ");
    scanf(" %lf %lf %lf", &a, &b, &c);

    //formula for the calculation of the discriminant of the quadratic equation
    discriminant = b * b - 4 * a * c;

    // procedure for real and different roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a); // sqrt() is the function used for the calculation of the sqaure root
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf(" root1 = %.2lf  and  root2 = %.2lf  ", root1, root2);
    }

    // procedure  for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("  root1 = root2 = %.2lf;", root1);
    }

    // procedure for unreal roots
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
