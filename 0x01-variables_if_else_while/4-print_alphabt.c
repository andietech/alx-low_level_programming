#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char number;

	for (number = 'a'; number <= 'z'; number++)
		if (number != 'e' && number != 'q')
			putchar(number);
	putchar('\n');
	return (0);
}
