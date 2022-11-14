#include <stdio.h>
int main()
{
    int i;
    int multiple = 8;
    for (i=0; i<11; i++)
        printf("%dx%d = %d\n", i, multiple, i*multiple);
}
