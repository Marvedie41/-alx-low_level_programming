#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * Description: Multiplies two numbers passed as arguments through the command line.
 * 
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * 
 * Return: 0 if success, otherwise 1.
 */
int main(int argc, char *argv[])
{
    int result;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    result = atoi(argv[1]) * atoi(argv[2]);

    printf("%d\n", result);
    return (0);
}
