#include "main.h"
#include <string.h>
/**
* _strcat - function to concatenate strings
* @dest - first parameter
* @src - Second parameter
* @n - third parameter
* Return: a string
*/
char *_strcat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
