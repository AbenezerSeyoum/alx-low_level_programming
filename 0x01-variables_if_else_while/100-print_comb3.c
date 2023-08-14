#include <stdio.h>
/**
 * main - prints all possible combination between two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;
	
	for (n = 48; n <= 56; n++)
	{
		for (m = 49; n <= 57; m++)
		{
			if (m > n)
			{
				putchar(m);
				putchar(n);
				if (n != 56 || n !=57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
