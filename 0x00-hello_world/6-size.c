#include <stdio.h>
/**
 * main - A program that prints sizes
 * Return: 0 (Success)
 */
int main(void)
{

	char c;
	int i;
	long int l;
	long long int z;
	float f;

	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
