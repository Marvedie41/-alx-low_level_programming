#include "main.h"

/**
 * main - Multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if successful, 98 if arguments are invalid
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i = 1, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	do {
		j = 0;

		do {
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}

			j++;
		} while (argv[i][j] != '\0');

		i++;
	} while (i < argc);

	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
