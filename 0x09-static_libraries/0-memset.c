#include "main.h"

/**
 * _memset - fills n bytes
 * @s: pointer to the char parameters
 * @b: data to change
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
