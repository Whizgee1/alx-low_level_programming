#include "main.h"

/**
 * _puts - prints str followed by a new line
 * @str: pointer to the string to point
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
