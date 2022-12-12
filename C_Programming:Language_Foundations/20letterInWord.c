/*
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.
*/
#include <stdio.h>

int main() {
    char word[50];
    scanf("%s", word);
    int i=0, j=0, firstHalf, secondHalf;
    while (word[i] != '\0')
    {
        i++;
    }
    firstHalf = secondHalf = i / 2;
    for (j=0; j<i;j++)
    {
        if (word[j] == 't' || word[j] == 'T')
        {
            if (i % 2 != 0)
                firstHalf += 1;
            else
                firstHalf = secondHalf;
                
            if (j < firstHalf)
                printf("%d\n", 1);
            else
                printf("%d\n", 2);
        }
    }
    return 0;
}
