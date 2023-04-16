#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints all arguments received through the command line.
 * 
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * 
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int count;

    for (count = 0; count < argc; count++)
    {
        printf("%s\n", argv[count]);
    }

    return (0);
}
