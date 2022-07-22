#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 * @s: string where substring will look
 * @accept: substring of accepred chars
 * Return: length of occurance
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}

	return (c);
}
