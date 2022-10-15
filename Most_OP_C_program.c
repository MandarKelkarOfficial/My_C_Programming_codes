#include<stdio.h>
#include<conio.h>
int main()
{
    int a,math,eng,sci;
    float avg;
    char y,n;
    printf("Enter your roll number:\n");
    scanf("%d",&a);
    printf("Enter the marks you have got in Maths\n");
    scanf("%d",&math);
    printf("Enter the marks you have got in English\n");
    scanf("%d",&eng);
    printf("Enter the marks you have got in Science\n");
    scanf("%d",&sci);
    avg=math+eng+sci/3;
    if(avg<=40)
       printf("Roll no %d .You have failed the test with average of %f ",a,avg);
       else
         printf("Roll no %d.You have pass the test with average of %f\n",a,avg);

    printf("If you want print of your result enter y or press n key to exit\n");
    scanf("%c%c",&y,&n);     
         if(y==y)
         printf("Roll number %d \nMarks scored in Maths are %d\nMarks scored in English are %d\nMarks scored in Science are %d\nThe average is %f\n",a,math,eng,sci,avg);
         
         else
           printf("You have exit the program sucessfully");

    return 0;
}