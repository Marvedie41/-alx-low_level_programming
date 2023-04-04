#include "main.h"

/**
* _strstr - Locates a substring
* @haystack: String to be searched.
* @needle: Substring to be located.
*
* Return: if substring is located return pointer else Null.
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
