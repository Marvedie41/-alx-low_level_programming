#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 98 if invalid number of arguments or non-positive
 * numbers were passed as arguments.
 */
int main(int argc, char *argv[])
{
	unsigned long x;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > 57 || argv[a][b] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	x = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", x);
	return (0);
}
