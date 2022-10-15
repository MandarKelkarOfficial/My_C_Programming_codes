#include<stdio.h>
struct Employee
{
    int Employee_id;
    char Employee_name[50];
    float Employee_sal;
}e1[3];
void main()
{
    int i;
    
    for ( i = 0; i < 3; i++)
    {
    printf("Enter your id\n");
    scanf("%d",&e1[i].Employee_id);
    printf("Enter your name\n");
    scanf("%s",e1[i].Employee_name);
    printf("Enter your salary\n");
    scanf("%f",&e1[i].Employee_sal);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("Id of employee %d is %d \n\nName of employee %d id %s \n\nSalary of %d is %f\n\n",i+1,e1[i].Employee_id,i+1,e1[i].Employee_name,i+1,e1[i].Employee_sal);
    }
    //return 0;
}