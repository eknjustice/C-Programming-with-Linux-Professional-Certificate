#include <stdio.h>
#include <math.h>
int main()
{
    double amountOfCementNeeded;
    const int  pricePerBag = 45;
    scanf("%lf", &amountOfCementNeeded);
    double numberOfBagsNeeded = amountOfCementNeeded / 120;
    int roundedBags = ceil(numberOfBagsNeeded);
    int costOfCementNeeded = roundedBags*pricePerBag;
    printf("%d", costOfCementNeeded);
    
}
