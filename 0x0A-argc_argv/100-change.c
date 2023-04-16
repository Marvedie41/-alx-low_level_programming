#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins required to make change
 * @argc: Number of command line arguments
 * @argv: Array of pointers to strings representing the command line arguments
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    int cents, ncoins = 0;

    /* Check if there is exactly one command line argument */
    if (argc == 1 || argc > 2)
    {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    /* Loop through coins and reduce amount until zero */
    for (; cents > 0; ncoins++)
    {
        if (cents >= 25)
            cents -= 25;
        else if (cents >= 10)
            cents -= 10;
        else if (cents >= 5)
            cents -= 5;
        else if (cents >= 2)
            cents -= 2;
        else if (cents >= 1)
            cents -= 1;
    }

    printf("%d\n", ncoins);

    return (0);
}
