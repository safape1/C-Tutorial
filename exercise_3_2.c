// exercise_3_2.c

/*

Write a program that asks you to enter an ASCII code value, 
such as 66, and then prints the character having that ASCII code.

*/

#include <stdio.h>

int inCharValue;

int main(void)
{
	printf("Write a ASCII code value, please: \n");
	scanf("%d", &inCharValue);
	printf("The character of ASCII code value %d is %c \n", 
									inCharValue, inCharValue);
	
	return 0;
}