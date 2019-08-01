// WRTTE A C PROGRAM TO CHECK WHETHER A NUMBER ENTERED BY USER IS EVEN OR NOT
#include<stdio.h>
int main()
{
    int num;
    printf(" enter a number:");
    scanf("%d",&num);
    if(num%2 == 0)
       printf("%d is even\n",num);
    else 
        printf("%d is odd\n",num);
        
    
}
