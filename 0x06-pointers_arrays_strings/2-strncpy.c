#include "main.h"
#include <string.h>
/**
* _strncpy - function that copies strings
* @dest - first parameter
* @src -second parameter
* return: destination
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
