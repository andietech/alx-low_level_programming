#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 when success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}
