#include <stdio.h>
#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: The first unsigned long integer.
* @m: The second unsigned long integer.
* Return: number of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	unsigned long int count = 0;

	current =  n ^ m;  /* puts 1 at different values posithions*/
	while (current != 0)
	{
		count += current & 1; /*extract the least significant bit of the XOR*/
		current >>= 1; /*move loop*/
	}
	return (count);
}
