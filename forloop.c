//A C PROGRAM TO NFIND THE SUM OF FIRST N NATURAL NUMBERS
#include<stdio.h>
int main()
{
    int n,count,sum=0;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(count =1;count<=n;count++)
    {
        sum = sum +count;
    }
    printf("sum=%d",sum);
}
