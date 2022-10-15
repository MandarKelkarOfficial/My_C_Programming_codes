#include<stdio.h>
int fact(ptr_n)
{
    int sum=0;
    sum = sum *fact(ptr_n-1);
    return sum;
}
void main()
{
    int n,*ptr_n,res;
    printf("Enter the number for factorial");
    scanf("%d",&n);
    ptr_n=&n;
    fact(ptr_n);
    res = fact();
    printf("Factorial %d",res);

}