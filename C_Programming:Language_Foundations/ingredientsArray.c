/*
Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use! There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams). Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array. It should then read an integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity.
*/
#include <stdio.h>
int main()
{
    /*int gram[10];
    scanf("%d%d%d%d%d%d%d%d%d%d", &gram[0],&gram[1],&gram[2],&gram[3],&gram[4],&gram[5],&gram[6],&gram[7],&gram[8],&gram[9]);
    int i;
    scanf("%d", &i);
    printf("%d", gram[i]);*/
    
    int grams[10];
    int ingredient;
    int index;
    
    for (index = 0; index < 10; index++)
    {
        scanf("%d", &grams[index]);
    }
    scanf("%d", &ingredient);
    printf("%d\n", grams[ingredient]);
}
