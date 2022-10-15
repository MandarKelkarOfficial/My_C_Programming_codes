#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("* * * * * * \n");

       for ( i = 5; i >=0; i--)
    {
       for (j = 0;  j< i; j++)
       {
           printf("* ");
       }
       printf(" \n");
    }  
    return 0;
}
