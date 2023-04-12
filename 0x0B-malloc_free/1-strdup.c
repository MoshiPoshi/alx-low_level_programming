#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	int len;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	p = malloc(sizeof(char) * (len + 1));

	for (i = 0; i <= len; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
