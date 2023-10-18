#include "main.h"

/**
 * print_integer - prints the given integer
 * @value: the integer to be printed
 *
 * Return: always the int_count
 */


int print_integer(int value)
{
	int int_count = 0;

	if (value == 0)
	{
		_putchar('0');
		int_count++;
		return;
	}
	if (value < 0)
	{
		_putchar('-');
		value = -value;
		int_count++;
	}
	if (value / 10)
	{
		print_integer(value / 10);
	}

	_putchar('0' + value % 10);
	int_count++;
	return (int_count);
}
