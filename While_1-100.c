#include<stdio.h> 
int main() 
{ 
    int i=1,sum=0; 
    while ( i <= 100) 
    { 
        sum = sum+i; 
        i++; 
    } 
    printf("The sum of 1 to 100 is %d", sum); 
    return 0; 
} 
