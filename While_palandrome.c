#include<stdio.h>
int main()
{
    int n,temp,s=0,rem;
    printf("Enter the number to know weather its Palindrome or not\n");
    scanf("%d",&n);
    temp=n;
    while (temp>0)
    {
        rem=temp%10;
        s=(s*10)+rem;
        temp=temp/10;
    }
    if (s==n)
    {
        printf("\nThe number you have entered is Palindrome");
    }
    else
    {
        printf("\nThe number is not palindrome");
    }
    return 0;
    
}