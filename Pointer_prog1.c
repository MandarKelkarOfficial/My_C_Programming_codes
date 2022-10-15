#include<stdio.h>

int main()
{
    int a=5,b=8,c=10;
    int *a1,*b1,*c1;

    printf("The value of pointer before assinig the int value, \n*a=%u \n*b=%u \n*c=%u\n",a,b,c);

    a1=&a;
    b1=&b;
    c1=&c;

   printf("The value of pointer after assinig the int value, \na=%d\nb=%d\nc=%d",*a1,*b1,*c1);
return 0;

}