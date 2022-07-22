#include "main.h"

/**
 * _memcpy - copies n bytes to the pointer of a pointer
 * @dest: pointer to char parameters
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
