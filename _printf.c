#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	int char_count = 0;

	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			switch (*format)
			{
				case 'd':{
					  	int value = va_arg(args, int);
						print_integer(value);
						char_count +=
						break;
					  }
				case 's' : {
					   	const char *str = va_arg(args, const char *);
						print_string(str);
						char_count += strlen(str);
						break;
					   }
			}
		}
		else {
			_putchar(*format);
			char_count++;
		}

		format++;
	}

	va_end(args);

	return (char_count);
}
