#include <stdio.h>
int main()
{
    int multiple;
    //printf("Please enter number to get its multiplication table: ");
    scanf("%d", &multiple);
    for (int i=0; i<11; i++)
    {
        printf("%dx%d = %d\n", i, multiple, i*multiple);
    }
}
