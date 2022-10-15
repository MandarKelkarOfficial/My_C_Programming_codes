#include<stdio.h>
int main()
{
    int i,j,arr[2][2],abb[2][2],sum[2][2];
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
        for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n",i,j);
            scanf("%d",&abb[i][j]);
        }
        
    }
            for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            sum[i][j]=arr[i][j]*abb[i][j];
            
        }
        
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d\t",sum[i][j]);

        }
        printf("\n\n");
    }
    
}