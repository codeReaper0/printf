#include "main.h"

/**
 * str - prints string literal
 * @args: input arguments
 * Return: string
 */

int str(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_write_char(str[i]);
	}

	return (i);
}
