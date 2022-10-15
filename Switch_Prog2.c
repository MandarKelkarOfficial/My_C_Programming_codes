#include<stdio.h>
int main()
{
    int a,b,A,S,M,choice;
    float D;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Press \n1 to ADD\n2 to SUB\n3 to DIV\n4 to MULT\n");
    scanf("%d",&choice);
   
switch (choice)
{
case 1:
      A=a+b;
    printf("The addition of %d and %d is %d",a,b,A);
    break;

case 2:
     S= a-b;
    printf("The substraction of %d and %d is %d",a,b,S);
    break;
case 3:
      D=a/b;
    printf("The division of %d and %d is %f",a,b,D);
    break;

case 4:
     M= a*b;
    printf("The multiplication of %d and %d is %d",a,b,M);
    break;

default:
    printf("You have entered wrong choise.");

}
    return 0;
}