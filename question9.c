#include <stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    switch (n % 2 == 0)
    {
    case 1:
        n = n - 1;
        break;
    default:
        break;
    }
    printf("\n%d\n",n);
    return 0;
}