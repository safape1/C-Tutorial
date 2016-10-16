// exercise_3_5.c

/*

	There are approximately 3.156 × 107 seconds in a year. 
	Write a program that requests your age in years and then 
	displays the equivalent number of seconds.
*/

#import <stdio.h>

double yearSeconds = 3.156E7;
int inYourYears;

int main(void)
{

	printf("Write your age in years: ");
	scanf("%d", &inYourYears);
	printf("Your age in seconds: %f\n", yearSeconds * inYourYears);

	return 0;
}