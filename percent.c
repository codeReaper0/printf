#include "main.h"

/**
 * p_cent - Prints percent sign.
 * @args: Inputed argument
 * Return: Percent symbol.
 */
int p_cent(__attribute__((unused))va_list args)
{
	_write_char('%');
	return (1);
}
