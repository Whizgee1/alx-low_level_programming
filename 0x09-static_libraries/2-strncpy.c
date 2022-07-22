#include "main.h"

/**
 * *_strncpy - finds the length of the string
 * @dest: pointer to the string
 * @src: pointer
 * @n: int
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
