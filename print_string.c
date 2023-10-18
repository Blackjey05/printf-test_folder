#include "main.h"

int print_string(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return str;
}
