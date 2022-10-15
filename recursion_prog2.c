#include<stdio.h>
int fact(int ptr_n)
{
    int res;
    if (ptr_n==0)
    {
        res=1;
    }
    else
    {
        res = ptr_n*fact(ptr_n-1);
    }
    return res;
    
}
void main()
{
    int n,res;
    int *ptr_n;
    printf("Enter the number\n");
    scanf("%d",&n);
    ptr_n=&n;
    res = fact(*ptr_n);
    printf("%d",res);
}