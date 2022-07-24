#include<stdio.h>
int main()
{
    int day;
    printf("Enter day:");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
    printf("HAVE A GOOD MONDAY!");
     break;
    case 2:
    printf("HAVE A GOOD TUESDAY!");
     break;
     case 3:
    printf("HAVE A GOOD WEDNESDAY!");
     break;
     case 4:
    printf("HAVE A GOOD THURSDAY!");
     break;
     case 5:
    printf("HAVE A GOOD FRIDAY!");
     break;
     case 6:
    printf("HAVE A GOOD SATURDAY!");
     break;
     case 7:
    printf("HAVE A GOOD SUNDAY!");
     break;

    default:
        break;
    }
    return 0;
}