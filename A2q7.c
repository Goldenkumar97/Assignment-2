/*WAP to find the position of first 1 in LSB. */
#include"stdio.h"
int main()
{
int num;
printf("Enter a number : ");
scanf("%d",&num);
num=num&1;
printf("lsb number is = %d",num);    
    return 0;
}