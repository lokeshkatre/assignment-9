#include <stdio.h>
int main()
{
    int choice;
    float a, b;
again:
    printf("\nEnter:\n1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for Division\n5 for exit\n\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("ADDITION:Enter numbers:-\n");
        scanf("%f%f", &a, &b);
        printf("%.1f + %.1f = %.1f\n", a, b, a + b);
        goto again;
        break;
    case 2:
        printf("SUBTRACTION:Enter numbers:-\n");
        scanf("%f%f", &a, &b);
        printf("%.1f - %.1f = %.1f\n", a, b, a - b);
        goto again;
        break;
    case 3:
        printf("MULTIPLICATION:Enter numbers:-\n");
        scanf("%f%f", &a, &b);
        printf("%.1f * %.1f = %.2f\n", a, b, a * b);
        goto again;
        break;
    case 4:
        printf("DIVISION:Enter numbers:-\n");
        scanf("%f%f", &a, &b);
        printf("%.1f / %.1f = %.1f\n", a, b, a / b);
        goto again;
        break;
    case 5:
        printf("PROGRAM ENDS");
        return 0;

    default:
        printf("Wrong choice");
        break;
    }
    return 0;
}