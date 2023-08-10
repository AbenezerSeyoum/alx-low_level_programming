#include <stdio.h>
/**
 * main - A program that prints sizes
 * Return: 0 (Success)
 */
int main(void)
{

	int i;
	float f;
	char c;
	long int l;
	long long int z;

	printf("Size of an int is: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a float is: %lu bytes(s)\n", (unsigned long)sizeof(f));
	printf("Size of a char is: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int is: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int is: %lu bytes(s)\n", (unsigned long)sizeof(z));
	
	return (0);
}
