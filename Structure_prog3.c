#include<stdio.h>
struct Student
{
    int Student_id[5];
    char Student_name[30];
    int Student_marks[5];
    float Student_Avg[5];
    int Student_total[5];
}s1[3];
void main()
{
   int i,j;
   s1->Student_total[5]=0;
    for ( i = 0; i < 3; i++)
    {
          printf("Enter your name\n");
          scanf("%s",&s1[i].Student_name[i]);

          printf("Enter your id\n");
          scanf("%d",&s1[i].Student_id[i]); 

           printf("\nEnter your Marks of 5 subjects\n");
          for(j=0;j<5;j++)
          {
          scanf("%d",&s1[j].Student_marks[j]);   
          s1[i].Student_total[i]=s1[i].Student_total[i] +s1[j].Student_marks[j];
          } 

    }

    for ( i = 0; i < 3; i++)
    {
         printf("Total of student %d is %d\n",i+1,s1[i].Student_total[i]);
    }
    for ( i = 0; i <3 ; i++)
    {
        s1[i].Student_Avg[i]=s1[i].Student_total[i];
        printf("Average of Student %d is %f\n ",i+1, s1[i].Student_Avg[i]);
    }
    
                                                      
}