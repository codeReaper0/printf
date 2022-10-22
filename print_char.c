#include "main.h"

/**
 * char_ - prints character literal
 * @args: input arguments
 * Return: characters
 */

int char_(va_list args)
{
	_write_char(va_arg(args, int));
	return (1);
}
