#include <stdio.h>
#include <math.h>
#include "TowerOfHanoi.h"

int main()
{
	printf("How to solve a tower of hanoi with 7 rings:");
	subSolveTowerOfHanoi(7, 'A', 'C', 'B');
	printf("\n %d", intAmountOfMovements(7));
	printf("\nPress enter to exit.");
	getchar();

	return 0;
}
