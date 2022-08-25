/*WAP to check whether the given number is even or odd using a bitwise operator. */

#include"stdio.h"
int main()
{
int x;
printf("Enter a number : ");
scanf("%d",&x);
int result=x&1;
if(result==0)
printf("even");
else
printf("odd");
return 0;
}


