#include <stdio.h>

/**
 * main - Prints the size of various types on different environements
 *
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	long int a;
	long long int aaa;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(aaa));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
