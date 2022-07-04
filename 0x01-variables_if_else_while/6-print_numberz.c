#include <stdio.h>
/**
 * main - printing all single base 10 numbers
 * only using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
