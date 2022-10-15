#include<stdio.h>
int main()
{
    int n,sum,rem;
    printf("Enter the number :\n");
    scanf("%d",&n);
    sum=0;
    while (n>0) 
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The addition of given string is %d",sum);
    return 0;
    
}