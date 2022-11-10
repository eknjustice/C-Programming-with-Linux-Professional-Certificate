/*
Please help us fix this code. Here is the program in question:

#include <stdio.h>

int main(void) 
{
	printf ("This is code with errors: ")
	printf "Fix them!";
	return 0;
}
*/

#include <stdio.h>

int main(void) 
{
	printf ("This is code with errors: "); //inserted missing semi-colon
	printf ("Fix them!\n");	//inserted missing parantheses
	return 0;
}
