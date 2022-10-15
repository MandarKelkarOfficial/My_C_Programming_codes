#include<stdio.h>
int main()
{
int even,n=2;
printf("Enter the number:\n");
scanf("%d",&even);
    do
    {
        if (n%2==0)
        {
            printf("%d ",n);
        }
        n++;
        
    } while (n<=even);
    
}