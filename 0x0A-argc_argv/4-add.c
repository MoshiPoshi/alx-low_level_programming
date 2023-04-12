#include <stdio.h>
#include <stdlib.h>

/**
  * main - Add positive numbers
  * @argc: args counter
  * @argv: args array
  * Return: 0 success, 1 error
  */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num <= 0 || *argv[i] == '-')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
