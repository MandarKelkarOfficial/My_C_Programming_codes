#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number between 1 to 5 to get its spelling\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("ONE");
        break;
    
    case 2:
        printf("TWO");
        break;

    case 3:
        printf("THREE");
        break;

    case 4:
        printf("FOUR");
        break;

    case 5:
        printf("FIVE");
        break;

        default:
           printf("You have entered wrong choise\n");    
    }
    return 0;
}