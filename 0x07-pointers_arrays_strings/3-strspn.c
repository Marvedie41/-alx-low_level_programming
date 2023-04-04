/**
* _strspn - Gets the length of a prefix substring.
* @s: String to be searched.
* @accept: substring to be measured.
* Return: no of bytes in s which consists of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *a = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		if (!(*--accept))
			break;
		accept = a;
	}
	return (i);
}
