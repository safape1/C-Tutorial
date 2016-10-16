// exercise 2.3

/*
Write a program that converts your age in years to days and displays both values. 
At this point, don’t worry about fractional years and leap years
*/

#include <stdio.h>

int main(void)
{
	int myAge,
		ageDays;

	myAge = 22;
	ageDays = 22 * 365;

	printf("My age: %d\nMy age in days: %d\n", myAge, ageDays);	

	return 0;
}
