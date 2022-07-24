#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    switch((year%400==0)||(year%100!=0 && year%4==0))
    {
         case 1:
         printf("Year is a leap year");
         break;
         default:
         printf("Year is not a leap year");
         break;
    }
    return 0;
}