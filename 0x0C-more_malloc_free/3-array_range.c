#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: pointer to the array
 *         NULL if memory allocation fails or min > max
 */
int *array_range(int min, int max)
{
    int *x;
    int a;
    int b;

    if (min > max)
        return (NULL);

    x = malloc((max - min + 1) * sizeof(int));

    if (!x)
        return (NULL);

    for (a = 0, b = min; a <= max - min; a++, b++)
        x[a] = b;

    return (x);
}
