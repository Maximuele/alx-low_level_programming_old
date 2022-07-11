#include "main.h"

/**
 * reset_to_98 - function that takes a pointer 
 * to an int as parameter and updates value to 98
 * Return: 0
 */

void reset_to_98(int *n);
{
	int n;
	putchar("n=%d\n", n);
	reset_to_98(&n);
	putchar("n=%d\n", n);
	return (0);
}
