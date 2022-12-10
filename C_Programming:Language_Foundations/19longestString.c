/*
Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/
#include <stdio.h>
int main()
{
    int i = 0;
    int new = 0, value = 0;
    int nbWords = 0;
    scanf("%d", &nbWords);
    char Words[100];
    for (i=0; i<nbWords; i++)
    {
         scanf("%s", Words);
         int j=0;
         while(Words[j] != '\0')
         {
             j++;
             value = j;
         }
         if (new < value)
         {
             new = value;
         }
    }
    printf("%d", new);
}
