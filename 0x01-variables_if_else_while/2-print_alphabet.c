#include<stdio.h>
#include<unistd.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
