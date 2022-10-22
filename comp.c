#include "main.h"

/**
 * comp - Receives input to print a formated string.
 * @format: A string with expected characters.
 * @functs: functions structure.
 * @args: inputed arguments.
 * Return: Formated string.
 */
int comp(const char *format, data functs[], va_list args)
{
	int i, j, ret, chars_to_print;

	chars_to_print = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; functs[j].signs != NULL; j++)
			{
				if (format[i + 1] == functs[j].signs[0])
				{
					ret = functs[j].f(args);
					if (ret == -1)
						return (-1);

					chars_to_print += ret;
					break;
				}
			}
			if (functs[j].signs == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					chars_to_print = chars_to_print + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_write_char(format[i]);
			chars_to_print++;
		}
	}
		return (chars_to_print);
}
