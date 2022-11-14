#include <stdio.h>
int main()
{
    double myPocketMoney, bookPrice;
    scanf("%lf %lf", &myPocketMoney, &bookPrice);
    int numberOfBooksPurchased = (int)(myPocketMoney / bookPrice);
    printf("%d\n", numberOfBooksPurchased);
}
