#include<stdio.h>
struct Student
{
  char  Student_name;
  int Student_id;
  float Student_avg;
  int Student_total;
  int marks[5];
}s1;
void main()
{
    int i;
    s1.Student_total=0;
    printf("Enter your name and id\n");
    scanf("%s%d",&s1.Student_name,&s1.Student_id);

    for(i=0;i<5;i++)
    {
       printf("Enter the marks of sub %d : ",i+1);
       scanf("%d",&s1.marks[i]);
       s1.Student_total=s1.Student_total + s1.marks[i];
    }
    printf("Total = %d\n\n",s1.Student_total);
   
    s1.Student_avg=s1.Student_total/5;
    printf("Avg = %f\n\n",s1.Student_avg);

    printf("Name = %s  \nID = %d\nTotal marks = %d \nAverage of 5 subs = %f",s1.Student_name,s1.Student_id,s1.Student_total,s1.Student_avg);

}