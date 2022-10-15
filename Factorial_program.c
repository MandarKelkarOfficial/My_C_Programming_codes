#include<stdio.h>
int main()
{
    int f=1,n=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while (n>0)
    {
        f=f*n;
        n=n-1;
    }
    printf("Factorial is %d",f);
    
}