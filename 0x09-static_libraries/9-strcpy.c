#include "main.h"

/**
 * *_strcpy - copies string pointed by src
 * @dest: char type string
 * @src: char type string
 * Description: copy sting pointed by src
 * buffer pointed to dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
