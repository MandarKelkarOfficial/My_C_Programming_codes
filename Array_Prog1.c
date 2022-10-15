#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the 10 integer elements of array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);      
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
    
    return 0;
}