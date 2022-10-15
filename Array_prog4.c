#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("Enter the 5 integer element you want to store:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        b[i]=a[i];
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\nThe value of array a is %d",a[i]);
    }
    printf("\n\n");
    for ( i = 0; i < 5; i++)
    {
        printf("\nThe value of array b is %d",b[i]);
    }
    
    return 0;
    
    
}