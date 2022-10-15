#include<stdio.h>
 sum() //First method - function with no return type or args.
{
   int a,b,res;
   printf("Enter two numbers\n");
   scanf("%d%d",&a,&b);
   res = a + b;
   printf("%d",res);
   return 0;
   
}
int sub(int a1,int b1) //Second method - function with no return type but args
{
   int k;
   k= a1-b1;
   printf("%d",k);
   return 0;
}
int multi()//Third type - function with return type and no args
{
    int a2,b2;
     printf("Enter two numbers\n");
     scanf("%d%d",&a2,&b2);
     return a2*b2;
     
}
float div(float a3,float b3)// Forth type - function with return type and args.
{
    float total;
    total= a3/b3;
    return total;

}
void main()
{
    int a1,b1,res;
    float a3,b3,res2;
    sum();
    printf("Enter two numbers\n");
    scanf("%d%d",&a1,&b1);
    sub(a1,b1);
    res=  multi();
    printf("%d",res);
    printf("Enter two numbers\n");
    scanf("%f%f",&a3,&b3);
    res2= div(a3,b3);
    printf("%f",res2);
}
