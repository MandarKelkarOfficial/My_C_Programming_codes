#include<stdio.h>
int main()
{
    int i,j[10],count=1;
    printf("Enter the array elements\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&j[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d is %d at a[%d]\n",count,j[i],i);
        count++;
    }
    return 0;
    
}