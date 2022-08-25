/*WAP to program to print unit digit of a number.*/
#include"stdio.h"
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("unit digit of number %d is %d",a,a%10);
    return 0;
}