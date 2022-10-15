#include<stdio.h>
int main()
{
    int n1,n,sum=0,rem;
    printf("Enter the number:\n");
    scanf("%d",&n);
    n1=n;
    do
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
     while(n>0);
    if (n1==sum)
    {
        printf("The number  is armstrong number");
    }
    else
    {
        printf("The number is not a armstrong number");
    }
   
 return 0;   
}