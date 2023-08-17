#include "main.h"

/**
 * positive_or_negative - check for zero
 * @i: number to be checked
 * Description: positive_or_negative() gives the correct output 0.
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
