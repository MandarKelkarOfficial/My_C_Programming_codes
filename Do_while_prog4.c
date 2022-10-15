#include<stdio.h>
int main()
{
    int n,rem,count=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
do
    {
        rem=n%10;
        count++;
        n=n/10;
    }
     while(n>0);
    printf("The count of number entered is %d",count);
    return 0;
}