#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	
	while (i < 10)
	{
		ch = 'a';
		while (ch <= '2')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
