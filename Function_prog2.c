#include<stdio.h>
void main()
{
    int a1,b1;
    printf("Enter two numbers\n");
    scanf("%d%d",&a1,&b1);
    sub(a1,b1);
}
int sub(int a1,int b1) //Second method - function with no return type but args
{
   int k;
   k= a1-b1;
   printf("%d",k);
   return 0;
}