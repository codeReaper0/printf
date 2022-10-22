#include "main.h"

/**
 * num -function prints number
 * @args: Arguments
 * Return: Number
 */
int num(va_list args)
{
	int v, k, len;
	unsigned int n;

	v  = va_arg(args, int);
	k = 1;
	len = 0;

	if (v < 0)
	{
		len += _write_char('-');
		n = v * -1;
	}
	else
		n = v;

	while (n / k > 9)
	k *= 10;

	while (k != 0)
	{
		len += _write_char('0' + n / k);
		n %= k;
		k /= 10;
	}

	return (len);
}
