#include <stdio.h>
#include <math.h>

void subSolveTowerOfHanoi(int intAmountOfRings, char charSourceRodName, char charDestinationRodName, char charAuxRodName)
{
	if (intAmountOfRings == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", charSourceRodName, charDestinationRodName);
		return;
	}
	subSolveTowerOfHanoi(intAmountOfRings - 1, charSourceRodName, charAuxRodName, charDestinationRodName);
	printf("\n Move disk %d from rod %c to rod %c", intAmountOfRings, charSourceRodName, charDestinationRodName);
	subSolveTowerOfHanoi(intAmountOfRings - 1, charAuxRodName, charDestinationRodName, charSourceRodName);
}

int intAmountOfMovements(int intAmountOfRings)
{
	double dbl = (double)intAmountOfRings * 1.0;
	return (int)(pow(2, dbl)) - 1;
}