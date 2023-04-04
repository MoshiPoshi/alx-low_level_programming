#include "main.h"

/**
  * _memcpy - copy memory area.
  * @dest: destination memory address
  * @src: source memory address
  * @n: number of first bytes of memory address
  * Return: @dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
