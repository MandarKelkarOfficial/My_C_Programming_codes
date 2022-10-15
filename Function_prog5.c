#include<stdio.h>
sum(int a, int b)
{
    int k;
    k = a + b;
    return k;
}
sub(int a,int b)
{
   int z; 
   z = a - b;
   return z;
}
multi(int a,int b)
{
  int A;
  A=a*b;
  return A;
}
float div(a,b)
{
   float y;
   y = (float)a / b; 
   return y;
}
void main()
{
    int i,a,b,choice,res,res1,res2;
    float res3;
    for(i = 0;i<4;i++)
    {
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    printf("Choose the operation you want to perform\n\nPress 1 for addition\nPress 2 for Substraction\nPress 3 for multiplication\nPress 4 for division.\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        res=sum(a,b);
        printf("Addition is %d\n",res);
        break;
    case 2:
        res1=sub(a,b);
        printf("Substraction is %d\n",res1);
        break;
    case 3:
        res2=multi(a,b);
        printf("Multiplication is %d\n",res2);
        break;
    case 4:
        res3=div(a,b);
        printf("Division is %f\n",res3);
        break;
    
    default:
        printf("Oops wrong choice!.");
        break;
    }
  }
}