/*
Please arrange the following program segments in the correct order so that it prints "I love love love programming!"

Then use comments to label the pieces of the program (preprocessor directive, variable declaration, executable statement, return statement, main function).

    printf("I ");

    for(i = 0; i < 3 ; i++) {
        printf("love ");
    }

    return(0);

    printf("programming!\n");

    #include <stdio.h>

}

int main(void){

    int i;
*/
#include <stdio.h>
//main function
int main(void){
    int i;//variable declaration
    
    printf("I ");
    //for loop to print love three times
    for(i = 0; i < 3; i++) {
        printf("love ");
    }
    printf("programming!\n");
    //return statement
    return(0);
}
