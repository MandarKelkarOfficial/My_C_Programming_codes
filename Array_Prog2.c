#include<stdio.h>
void main()
{
    int roll_no[5],i;
    int marks1[5];
    int marks2[5];
    int total[5];
    float avg[5];
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the roll no:\n");
        scanf("%d",&roll_no[i]);
        printf("Enter marks of first subject:\n");
        scanf("%d",&marks1[i]);
        printf("Enter the marks of second subject:\n");
        scanf("%d",&marks2[i]);
        total[i]=marks1[i]+marks2[i];
        avg[i] = total[i]/2;
    }
    for ( i = 0; i < 5; i++)
    {
        printf("The total marks is %d and average is %f\n",total[i],avg[i]);
    }
    return 0;
    
}