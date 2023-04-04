#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory adress
 * @b: constant byte
 * @n: the first bytes from memory
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
