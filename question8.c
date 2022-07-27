#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    switch (n > 0)
    {
    case 1:
        n = -n;
        break;
    default:
        n = -n;
        break;
    }
    printf("\n%d", n);
    return 0;
}