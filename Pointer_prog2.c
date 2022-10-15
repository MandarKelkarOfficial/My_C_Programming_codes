#include<stdio.h>
int AddArray(){
    int a[10],sum=0;
    int *ptr_a;
    ptr_a=&a[0];
    printf("Enter  numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + (*ptr_a++);

    }
    return sum; 
}
//---------------------------------------------------------------------------------------------------------------------------------

void main()
{
 int res;
 res=AddArray();
 printf("Sum is %d",res);
    
}
