#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)


{
    int gre;
    if (a > b && a > c && a > d)
    {
        gre = a;

    }
    else if (b > a && b > c && b > d)
    {
        gre = b;
        
    }
    else if (c > b && c > a && c > d)
    {
        gre = c;
        
    }
    else{

        gre =d;


    }

    return gre;


}
int main()
{
    int a, b, c, d;
    int ans;
    scanf("%d \n %d \n %d \n %d \n", &a, &b, &c, &d);
    ans = max_of_four(a , b , c , d);
    printf("%d", ans);

    return 0;

}