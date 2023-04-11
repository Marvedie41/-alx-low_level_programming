#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: count.
 * @av: vector.
 *
 * Return: null.
 */
char *argstostr(int ac, char **av)
{
	char *x;
	int y, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (y = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			y++;
		y++;
	}

	x = malloc((y + 1) * sizeof(char));

	if (x == NULL)
	{
		free(x);
		return (NULL);
	}

	for (i = j = ia = 0; ia < y; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			x[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < y - 1)
			x[ia] = av[i][j];
	}
	aout[ia] = '\0';

	return (x);
}
