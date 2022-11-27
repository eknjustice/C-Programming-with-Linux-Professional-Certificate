/*
Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.
*/
#include <stdio.h>
int main()
{
    char star = '*';
    int sideLength;
    scanf("%d", &sideLength);
    for (int i=0; i<sideLength; i++)
    {
        for (int j=0; j<sideLength; j++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
}
