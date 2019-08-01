// C PROGRAM TO ADD ALL NUMBER ENTERED BY A USER UNTIL THE USER ENTER 0
#include<stdio.h>
int main()
{
    int sum=0,num;
    do
    {
        printf("enter a number: ");
        scanf("%d",&num);
        sum = sum + num;
    }
    while(num!=0);
    printf("sum=%d\n",sum);
}
