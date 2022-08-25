/*Write a program to take a three-digit number from the user and rotate its digits by one position towards the right. */
#include <stdio.h>
int main()
{
    int p, q, r;
    printf("Enter a three digits number\n");
    scanf("%d", &p);
    q = p % 10;
    p = p / 10;
    r = 100 * q + p;
    printf("After rotating one position toward right %d",r);
    return 0;
}