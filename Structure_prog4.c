#include<stdio.h>
struct Student1
{
    int Student_id;
    char Student_name[30];
    int Student_marks[5];
}s1;
void main()
{
   int i,total;
   float avg;
   {
          printf("Enter your name\n");
          scanf("%s",s1.Student_name);
          printf("Enter your id\n");
          scanf("%d",&s1.Student_id);
          printf("Enter your Marks of 5 subjects\n");
          for ( i = 0; i < 5; i++)
          {
             scanf("%d",&s1.Student_marks[i]);
          }
          for ( i = 0; i < 5; i++)
          {
              total=total+s1.Student_marks[i];
          }
          
     avg=total/5;

    }
    {
        printf("ame : %s\nTotal : %d \n ID : %d\nAverage : %f",s1.Student_name,total,s1.Student_id,avg);
    }
    
    
}