#include "main.h"

/**
 * _isdigit - Check if character is a digit
 * @x: the number to be checked
 * Return: 1 for a character that will be a digit and 0 for anything else
 */

int _isdigit(x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
