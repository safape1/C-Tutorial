// exercise_3_1.c

/*

Find out what your system does with integer overflow, 
floating-point overflow, and floating-point underflow 
by using the experimental approach; that is, write programs 
having these problems. (You can check the discussion in Chapter 
4 of limits.h and float.h to get guidance on the largest and smallest 
values.)

*/

#import <stdio.h>

int intMaxSize = 2147483647;
float floatMaxSize = 3.4E38;
float floatMinSize = -3.4E38;

int main(void)
{

	printf("Integer overflow: %d\n", intMaxSize + 1);
	printf("Float overflow: %f\n", floatMaxSize + 3.4E1);
	printf("Float underflow: %f\n",floatMinSize - 3.4E1);

	return 0;
}

