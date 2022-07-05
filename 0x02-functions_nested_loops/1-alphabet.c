#include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0 Success
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
