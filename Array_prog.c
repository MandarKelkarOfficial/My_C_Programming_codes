#include<stdio.h>
int main()
{
    int i,n,count,a[100];
    printf("Enter the numbers of element \n");
    scanf("%d",&n);
    for ( i = 0; i <= n-1; i++)
    {
        count++;
        printf("Enter the value of %d element \n",count);
        scanf("%d",&a[i]);

    }
    printf("The entered numbers are :\n");
    for ( i = 0; i <= n-1; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}