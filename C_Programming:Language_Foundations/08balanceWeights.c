/*
You are responsible for a rail convoy of goods consisting of several boxcars. You start the train and after a few minutes you realize that some boxcars are overloaded and weigh too heavily on the rails while others are dangerously light. So you decide to stop the train and spread the weight more evenly so that all the boxcars have exactly the same weight (without changing the total weight). For that you write a program which helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). Then your program should calculate and display how much weight to add or subtract from each car such that every car has the same weight. The total weight of all of the cars should not change. These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars. 
*/
#include <stdio.h>
int main()
{
    int i;
    int boxcars;
    scanf("%d", &boxcars);
    double weights[boxcars];
    
    double total_weight = 0.0; 
    
    for (i=0; i<boxcars; i++)
    {
        scanf("%lf", &weights[i]);
        total_weight += weights[i];
    }
    double box_weight = total_weight/boxcars;
    /*printf("%lf\n", total_weight);
    printf("%lf\n", box_weight);*/
    for (i=0;i<boxcars;i++)
    {
        if (box_weight==weights[i])
        {
            printf("%.1lf\n", weights[i]-box_weight);
        }
        else if (box_weight>weights[i])
        {
            printf("%.1lf\n", box_weight-weights[i]);
        }
        else
        {
            printf("%.1lf\n", box_weight-weights[i]);
        }
    }
    return 0;
}
