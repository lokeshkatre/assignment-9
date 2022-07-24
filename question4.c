#include <stdio.h>
int main()
{
    char choice;
    int a, b, c;
again:
    printf("Enter :");
    printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("d. Exit\n");
    scanf("%c", &choice);
begin:
    switch (choice)
    {
    case 97:
        printf("\nEnter sides of triangle in ascending order:");
        scanf("%d%d%d", &a, &b, &c);
        if (a + b > c)
        {
            if ((a == b) || (b == c) || (c == a))
                printf("\nGiven set of sides are isosceles triangle\n\n");
            else
                printf("\nGiven set of sides are not isosceles triangle\n\n");
        }
        else
            printf("\nnot the sides of Triangle\n\n");
        goto again;

    case 98:
        printf("\nEnter sides of triangle in ascending order:");
        scanf("%d%d%d", &a, &b, &c);
        if (a + b > c)
        {
            if (a * a + b * b == c * c)
                printf("\nGiven set of sides are right angled triangle\n\n");
            else
                printf("\nGiven set of sides are not right angled triangle\n\n");
        }
        else
            printf("\nnot the sides of Triangle\n\n");
        goto again;

    case 99:
        printf("\nEnter sides of triangle in ascending order:");
        scanf("%d%d%d", &a, &b, &c);
        if (a + b > c)
        {
            if (a == b && b == c)
                printf("\nGiven set of sides are equilateral triangle\n\n");
            else
                printf("\nGiven set of sides are not equilateral triangle\n\n");
        }
        else
            printf("\nnot the sides of Triangle\n\n");
        goto again;

    case 100:
        printf("Program ends");
        return 0;

    default:
        scanf("%c", &choice);
        goto begin;
    }
    return 0;
}