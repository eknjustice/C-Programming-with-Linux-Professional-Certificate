#include <stdio.h>
int main()
{
    double distance;
    scanf("%lf", &distance);
    //1km = 0.621371miles
    double convertedDistance = distance * 0.621371;
    printf("%lf\n", convertedDistance);
}
