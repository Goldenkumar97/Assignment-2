/* WAP to swap values of two int variables*/
#include"stdio.h"
int main()
{
int a,b,c;
printf("Enter \rtwo numbers :");
scanf("%d %d",&a,&b);
printf("a=%d b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nAfter swapping a=%d b=%d",a,b);
    return 0;
}