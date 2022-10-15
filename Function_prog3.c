#include<stdio.h>
void main()
{
    int res;
    res=  multi();
    printf("%d",res);
}
int multi()//Third type - function with return type and no args
{
    int a2,b2;
     printf("Enter two numbers");
     scanf("%d%d",&a2,&b2);
     return a2*b2;
     
}