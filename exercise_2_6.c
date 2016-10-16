// exercise_2_6.c

/*

Write a program that creates an integer variable called toes. 
Have the program set toes to 10. Also have the program calculate what 
twice toes is and what toes squared is. The program should print all 
three values, identifying them.

*/

#import <stdio.h>

int toes;

int main(void)
{
	toes = 10;

	printf("toes: %d\n", toes);
	printf("twice toes: %d\n", toes * 2);
	printf("squared toes: %d\n", toes * toes);

	return 0;

}