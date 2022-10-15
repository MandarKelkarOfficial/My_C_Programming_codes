#include<stdio.h>
float Divide(float a3,float b3)// Forth type - function with return type and args.
{
    float total;
    total= a3/b3;
    return total;

}
void main()
{
    float res2 ,a3,b3;
    printf("Enter two numbers\n");
    scanf("%f%f",&a3,&b3);
    res2=Divide(a3,b3);
    printf("%f",res2);
}
