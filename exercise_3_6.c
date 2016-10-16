// exercise_3_6.c

/*

	The mass of a single molecule of water is about 3.0×10-23 grams. 
	A quart of water is about 950 grams. Write a program that requests 
	an amount of water, in quarts, and displays the number of water 
	molecules in that amount. 

*/

#include <stdio.h>

static float singleMoleculeWater = 3.0E-23;
static int molPerQuartsWater = 950; //in grams
double amountOfWater;
float result;

int main(void) 
{
	printf("Enter amount of water in quarts:\n");
	scanf("%lf", &amountOfWater);
	result = (amountOfWater * molPerQuartsWater) * singleMoleculeWater;
	printf("Number of water molecules in %.00f quarts is %e.\n", amountOfWater, result);

	return 0;

}
