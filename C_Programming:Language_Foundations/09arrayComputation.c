/*
You plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it with 6 decimal places.
*/
#include <stdio.h>
int main()
{
    int num_of_ingredients;
    scanf("%d", &num_of_ingredients);
    double price_array[num_of_ingredients];
    double weight_array[num_of_ingredients];
    double total_cost = 0;
    int i;
    
    for (i=0; i<num_of_ingredients; i++)
    {
         scanf("%lf", &price_array[i]);
    }
    
    for (i=0; i<num_of_ingredients; i++)
    {
         scanf("%lf", &weight_array[i]);
         double current_cost = price_array[i] * weight_array[i];
         total_cost += current_cost;
    }
    printf("%lf\n", total_cost);
    
    return 0;
}
