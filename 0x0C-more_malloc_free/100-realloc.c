#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *source, *destination;
	unsigned int x;

	if (ptr != NULL)
		source = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	destination = malloc(new_size);
	if (destination == NULL)
		return (0);
	for (x = 0; x < (old_size || x < new_size); x++)
	{
		*(destination + x) = source[x];
	}
	free(ptr);
	return (destination);
}
