#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: source address.
 * @to: target address.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
