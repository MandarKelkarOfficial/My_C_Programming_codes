#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int a,b,a1,b1,choice,k,n;
    c:
    printf("Welcome to our portal. \nPlease choose one of the option to proceed:\n1.Press 1 to book AC rooms\n2.Press 2 to book NON-AC rooms.\n");
    scanf("%d",&choice);
     switch (choice)
      {
      case 1:

          printf("You have entered option one and seleced booking of AC rooms\nTo continue press 1. Press 2 to exit.\n");
          scanf("%d",&k);
          switch (k)
          {
          case 1:
             printf("Please enter the following details:\n");
              break;

          default:
             printf("Error\n");
             goto c;
              break;
          }
          printf("Please enter how many of you are there:\n");
          scanf("%d",&a);
          printf("Please enter how many day you are lodgging\n");
          scanf("%d",&a1);
          printf("your total amount of bill is Rs %d/- (%d  members , %d  days)\n",a1*150,a,a1);
           printf("\nYou have successfully booked the room and your ticket no is %d",rand());
          break;

       case 2:

           printf("You have entered option two and seleced booking of NON-AC rooms\nTo continue press 1. Press 2 to exit.\n");
           scanf("%d",&n);
            switch (n)
          {
          case 1:
             printf("Please enter the following details:\n");
              break;

          default:
             printf("Error\n");
             goto c;
              break;
          }   
          printf("Please enter how many of you are there:\n");
          scanf("%d",&b);
          printf("Please enter how many day you are lodgging\n");
          scanf("%d",&b1);
          printf("your total amount of bill is Rs %d/- (%d  members , %d  days)\n",b1*100,b,b1);
           printf("\nYou have successfully booked the room and your ticket no is %d",rand());
          break;
              
      default:
        printf("You logout the portal because of error");
          break;
      }
     
    return 0;
}