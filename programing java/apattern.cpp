#include<stdio.h>
#include<conio.h>
 int main()
{
  
      char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("You have entered a upper case character ");
        printf("Lower case value is %c",(ch+32));
    }
    else{
        printf("You have entered  a lower case value");
        printf("upper case value is %c",(ch-32));
    }
    return(0);
}
