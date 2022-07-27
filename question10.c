#include <stdio.h>
int main()
{
    int a, b, c, D;
    float r1, r2;
    printf("Enter a,b and c of quadratic equation");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    switch (D > 0)
    {
    case 1:
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);

        printf("Two distinct and real roots exists: %.2f and %.2f",
               r1, r2);
        break;

    case 0:
        switch (D < 0)
        {
        case 1:

            r1 = r2 = -b / (2 * a);
            int img = sqrt(-D) / (2 * a);

            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   r1, img, r2, img);
            break;

        case 0:

            r1 = r2 = -b / (2 * a);

            printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);

            break;

        default:
            break;
        }
    }
    return 0;
}