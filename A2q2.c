/*WAP to print a given number without its last digit.*/
#include"stdio.h"
int main()
{
int x;
printf("Enter a number : ");
scanf("%d",&x);
printf("%d without its last digit is %d",x,x/10);
    return 0;
}