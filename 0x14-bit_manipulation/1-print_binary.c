#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @l: number to print in binary
 */
void print_binary(unsigned long int l)
{
	int n, count = 0;
	unsigned long int current;

	for (n = 63; n >= 0; n--)
	{
		current = l >> n;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

