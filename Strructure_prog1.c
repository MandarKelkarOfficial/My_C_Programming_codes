#include<stdio.h>
typedef struct Student
{
    int Roll_no;
    char name[40];
    float marks;

}Student;

void main()
{
  Student s1;
    printf("Enter your roll number\n");
    scanf("%d",&s1.Roll_no);
    printf("Enter your name \n");
    scanf("%s",s1.name);
    printf("Enter your marks\n");
    scanf("%f",&s1.marks);
    printf("Roll no:- %d \nName :-%s \nMarks:- %f",s1.Roll_no,s1.name,s1.marks);
   
}
