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

	printf("The size of int is: %lu bytes(s)\n" , (unsigned long)sizeof(i);
	printf("The size of float is: %lu bytes(s)\n" , (unsigned long)sizeof(f);
	printf("The size of char is: %lu bytes(s)\n" , (unsigned long)sizeof(c);
	printf("The size of long int is: %lu bytes(s)\n" , (unsigned long)sizeof(l);
	printf("The size of long long int is: %lu bytes(s)\n" , (unsigned long)sizeof(z);
	
	return (0);
}
