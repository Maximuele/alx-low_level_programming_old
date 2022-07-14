#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strcat - returns the length of a string
* @dest - first parameter
* @src - Second parameter
* Return: a string
*/
char *_strcat(char *dest, char *src)
{
	int length = 0; i;
	
	while (dest[length])
		length++;
	for (i = 0; src[i] != 0; i++)	
	{
		dest[length] = src[i];
		length += 1;
	}
	dest[length] = '0';
	return (dest);
}

