#include "main.h"

/**
 * _isupper - check if a character is a digit
 * @x: The number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else
		return (0);
}
