// WRITE A C PROGRAM TO CREATE A SIMPLE CALCULATOR
#include<stdio.h>
int main()
{
    char operator;
    int num1,num2;
    printf(" select a operator\n1.+\n2.-\n3.*\n4./\n");
    scanf("%c",&operator);
    printf(" enter two operands");
    scanf("%d%d",&num1,&num2);
    switch(operator)
    {
            case '+':
                printf("%d+%d=%d",num1,num2,num1+num2);
                break;
            case '-':
                printf("%d-%d=%d",num1,num2,num1-num2);
                break;
            case '*':
                printf("%d*%d=%d",num1,num2,num1*num2);
                break;
            case '/':
                printf("%d/%d=%d",num1,num2,num1/num2);
                break;
            default :
                printf("error! selection is invalid");
                break;    
    }
}
