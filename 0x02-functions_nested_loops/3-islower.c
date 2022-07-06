#include "main.h"

/**
 * _islower - function to check lowercase alphabet
 * @c: int that will be usde for the argument of the function
 * Return: 0
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
