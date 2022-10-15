#include<stdio.h>
int main()
{
    int i ,j, n=1;
    for ( i = i; i <= 4; i++)
    {
        for ( j = 5; j >=5; j--)
        {
            if (j>i)
            {
                printf(" ");
            }
            else
            {
                printf("%d ",n++);
            }
            
        }
        printf("\n");
    }
    return 1;
}