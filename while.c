/* a 'c' program to demonstrate the working of while */
#include<stdio.h>
int main()
{
    int factorial,number;
    printf(" Enter a number: ");
    scanf("%d",&number);
    factorial = 1;
    while(number>0)
    {
        factorial = factorial*number;
        number--;
    }
    printf("factorial = %d\n",factorial);
}
