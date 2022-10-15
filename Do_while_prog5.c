#include<stdio.h>
int main()
{
    int a,cube;
    char ch;
    do 
    {
    printf("Enter the number you want cube of:\n");
    scanf("%d",&a);
        cube=a*a*a;
        printf("\nThe cube of %d is %d",a,cube);
        printf("\nIf you want to continue press 'yes'");
        scanf("%s",&ch);    
    } while (ch=='y');
    
}