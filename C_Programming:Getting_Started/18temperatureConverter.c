#include <stdio.h>
int main()
{
    double TemperatureF, TemperatureC;
    scanf("%lf", &TemperatureC);
    TemperatureF = TemperatureC * 9.0 / 5.0 + 32.0;
    printf("%.1lf\n", TemperatureF);
}
