#include "main.h"

/**
 * _printf - prints formatted string to stdout
 * @format: input string of characters
 * Return: formatted string
 */
int _printf(const char *format, ...)
{
	int chars_to_print;

	data functs[] = {
		{"c", char_},
		{"s", str},
		{"%", p_cent},
		{"d", integer},
		{"i", integer},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	chars_to_print = comp(format, functs, args);
	va_end(args);
	return (chars_to_print);
}
