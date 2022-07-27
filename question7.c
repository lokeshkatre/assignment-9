#include <stdio.h>
int main()
{
    int unit;
    float price;
    printf("Enter Electricity bill units:");
    scanf("%d", &unit);
    switch (unit)
    {
    case 1 ... 50:
        price = unit * 0.50;
        break;
    case 51 ... 150:
        price = (float)unit * 0.75;
        break;
    case 151 ... 250:
        price = (float)unit * 1.20;
        break;
    default:
        price = (float)unit * 1.50;
        break;
    }
    price=price+price*0.2;
    printf("\nThe Electricity bill is Rs %.2f\n", price);
    return 0;
}