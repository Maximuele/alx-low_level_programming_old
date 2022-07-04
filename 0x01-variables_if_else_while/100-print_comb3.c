#include <stdio.h>
/**
 * main - print all possible combinations
 * of two different digits
 * in ascending orders seperated by commas
 * followed by a space
 *return: always 0 (success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9: digit1++)
	{
		putchar((digit1 % 10) + '0');
		putchar((digit2 % 10) + '0')
	if (digit1 == 8 && digit2 ==9)
	continue;
	putchar(',');	
	putchar('');
	}
	putchar('\n');
	return (0);
}

