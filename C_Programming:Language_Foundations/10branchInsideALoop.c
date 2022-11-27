/*
You want to determine the number of cities in a given region that have a population strictly greater than 10,000. To do this, you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers).
*/
#include <stdio.h>
int main()
{
    int numberOfCities;
    scanf("%d", &numberOfCities);
    int cityPopulation[numberOfCities];
    int biggerThan10k = 0;
    
    for (int i=0; i<numberOfCities; i++)
    {
        scanf("%d", &cityPopulation[i]);
        if (cityPopulation[i]>10000)
        {
            biggerThan10k += 1;
        }
    }
    printf("%d\n", biggerThan10k);
}
