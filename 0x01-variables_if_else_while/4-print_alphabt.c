#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 * except for q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	if (letter != 'e' && letter != 'q')
		putchar(letter);
	putchar('\n');
	return (0);
}
