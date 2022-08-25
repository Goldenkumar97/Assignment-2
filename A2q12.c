/*12.Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.*/
#include"stdio.h"
int main()
{
float inr,usd=0;
printf("Enter Indian rupees");
scanf("%f",&inr);
usd=inr/76.23;
printf("after convert into usd %f",usd);


    return 0;
}