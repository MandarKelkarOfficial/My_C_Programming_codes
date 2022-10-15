#include<stdio.h>
int main()
{
    int a,b,i,c;
    a=1;
    b=2;
    i=1;
    printf(" 1  2  ");
    do
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c; 
        i++;
    } while (i<5);
    
}