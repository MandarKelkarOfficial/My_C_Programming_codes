#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    float dm,km,m,ft,inch,Farn,D,kg,tn,oz;
    int a,w,pm,mm,nm,mg,ug,choice,choice1,choice2;
    b:
   printf("\nWelcome to Unit converter,\nTo convert degree into faranhit press1 \nFor length converter press 2\nFor weight converter press 3\n\n[[*condition:-\n1>You have to enter option between 1-3 only to choose route of conversion otherwise your entry will be terminated\n2>After selecting the route if you want to go back to the main portal enter wrong choice(* applicabe only after selecting route.)\n3>Previous condition is not applicabe for option 1 in route selection.]]\n");
   scanf("%d",&choice1);
   switch(choice1)
   {
       case 1:
   printf("Enter the temperature in degree:\n");
   scanf("%f",&D);
   Farn=(D*1.8)+32;
   printf("%f degree celcius = %f Faranhit",D,Farn);
   break;
      
       case 2:
    printf("Enter the length you want to convert(In centimeter): \n");
    scanf("%d",&a);
    printf("Choose the option: \nPress 1 to convert %d in Kilometer \nPress 2 to convert %d in Decimeter\nPress 3 to convert %d in Meter \nPress 4 to convert %d in Milimeter \nPress 5 to convert %d in Picometer \nPress 6 to convert %d in Nanometer\nPress 7 to convert %d in Foot \nPress 8 to convert %d in Inch\n",a,a,a,a,a,a,a,a);
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: 
       km = a*0.00001;
        printf("%dcm = %fkm",a,km);
        break;

        case 2:
           dm=a*0.1;
           printf("%dcm = %fdm",a,dm);
           break;

           case 3:
               m=a*0.01;
               printf("%dcm = %fm",a,m);
               break;  

               case 4:
                   mm=a*10;
                   printf("%dcm = %dmm",a,mm);
                   break;

                   case 5:
                     pm=a*10000000000;
                     printf("%dcm = %dpm",a,pm);
                     break;

                     case 6:
                        nm=a*10000000;
                        printf("%dcm = %dnm",a,nm);
                        break;

                        case 7:
                              ft=a*0.0328;
                              printf("%dcm = %fft",a,ft);
                              break;
                               
                               case 8:
                                 inch=a*0.3937;
                                 printf("%dcm = %finch",a,inch);
                                 break;
                                 default:
                                       printf("wrong choice.Please select from 1 to 8 only.\nDue to error you have re directed to main choice portal.");
                                       goto b;
    }
    break;
    case 3:
    printf("Enter weight (in gram) to convert: \n");
    scanf("%d",&w);
    printf("Choose option:\nPress 1 to convert %d in Kilogram\nPress 2 to convert %d in tonne\nPress 3 to convert %d in Miligram\nPress 4 to convert %d in Ounce\nPress 5 to convert %d in Microgram.\n",w,w,w,w,w);
    scanf("%d",&choice2);
    switch (choice2)
    {
    case 1:
        kg=w*0.001;
        printf("%dg = %fkg",w,kg);
        break;

        case 2:
          tn=w*0.000001;
          printf("%dg = %ft",w,tn);
          break;
          
          case 3:
            mg=w*1000;
            printf("%dg = %dmg",w,mg);
            break;

             case 4:
                 oz=w*0.035273;
                 printf("%dg = %foz",w,oz);
                 break;


            case 5:
               ug=w*1000000;
               printf("%dg = %dug",w,ug);
               break;
                   
         default:
                 printf("\nYou have enterd wrong option .please select between 1 to 5\n Due to error you have redirected to main portal");
                 goto b;
    }
    break;
    default:
      printf("\nOption you have entered does not fulfill any condition thus your entry is terminated.");
   }
return 0;
}