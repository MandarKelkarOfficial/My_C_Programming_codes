#include<stdio.h>
int main()
{
    int a[4],i,big;
    printf("Enter the integer value you want to compare\n");
    for ( i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    big=a[1];
    for ( i = 0; i < 4; i++)
    {  
    if (big<a[i])
    {
        big=a[i];

    }

    }
    printf("%d is greatest",big);
    return 0;
}