#include <stdio.h>
int main()
{
    int numberOfMatches, sizeOfBox;
    scanf("%d %d", &numberOfMatches, &sizeOfBox);
    int numberOfFullBoxes = numberOfMatches / sizeOfBox;
    int numberOfRemainingMatches = numberOfMatches % sizeOfBox;
    printf("%d\n", numberOfFullBoxes);
    printf("%d\n", numberOfRemainingMatches);
}
