#include<stdio.h>
int main()
{
    int i=0,j=0;
    int arr[4][3];
    printf("Printing 2D array\nPlease enter the data elements:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter for arr[%d][%d]\n",i,j,arr[i][j]);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
             printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
        }
        
    }
    
}