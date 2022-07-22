#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to the char
 * @c: char parameters to be found
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
