#include "main.h"

/**
 * print_string - prints the given string that is a constant
 * @str: the given string
 *
 * Return: always the given string
 */

int print_string(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (str);
}

/**
 * print_string - prints the given string that is the normal char pointer
 * @str: the given string
 *
 * Return: always the given string
 */

int print_string(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	return (str);
}
