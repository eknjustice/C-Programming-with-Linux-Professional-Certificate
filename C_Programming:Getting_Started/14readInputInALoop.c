#include <stdio.h>
int main()
{
    int i;
    int numberOfRobotsDeployed;
    int enginePower;
    int resistance;
    int weight;
    int height;
    //printf("Enter number of robots deployed: \n");
    scanf("%d", &numberOfRobotsDeployed);
    //printf("Enter your robot's height, weight, enginePower and resistance: \n");
    //scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
    
    int totalPowerOfRobotsDeployed = 0;
    
    for(i=0; i<numberOfRobotsDeployed; i++)
    {
        //printf("Enter your robot's height, weight, enginePower and resistance: \n");
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        //printf("%d\n", powerOfEachRobot);
        int powerOfEachRobot = (enginePower + resistance) * (weight - height);
        totalPowerOfRobotsDeployed = totalPowerOfRobotsDeployed + powerOfEachRobot;
    }
    printf("%d\n", totalPowerOfRobotsDeployed);
    return 0;
}
