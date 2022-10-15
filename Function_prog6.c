#include<stdio.h>
#include<string.h>
void main()
{
    int a1,b1;
    char a[10],b[10],c[10],d[10];
    printf("Enter the strings for a,b\n");
    scanf("%s%s",&c,&d);
   /* strcat(a,b);
    printf("%s",a);
    b1=strlen(a);
    printf("\nString length is \n%d\n",b1);
    strcpy(a,b);
    printf("\n%s\n",a);*/
    a1=strcmp(c,d);
    printf("%d",a1);
    
    
}