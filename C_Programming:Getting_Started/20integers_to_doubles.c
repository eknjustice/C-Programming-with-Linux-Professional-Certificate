#include <stdio.h>
int main()
{
    int i, num;
    int number_of_grades_to_be_averaged;
    scanf("%d", &number_of_grades_to_be_averaged);
    int total_of_grades = 0;
    for(i=0; i<number_of_grades_to_be_averaged; i++)
    {
        scanf("%d", &num);
        total_of_grades += num;
    }
    
    double average = (double)total_of_grades / number_of_grades_to_be_averaged;
    printf("%.2lf\n", average);
}
