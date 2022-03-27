#include <stdio.h>

#include <stdio.h>

int max_of_four(int x,int y,int z,int w)
{
    int max;
    max=x;
    if(y>max&&y>z&&y>w)
    {
        max=y;
    }
    else if(z>max&&z>w&&z>y)
    {
        max=z;
    }
    else if(w>max&&w>y&&w>z)
    {
        max=w;
    }
    else
    {
        max=x;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

