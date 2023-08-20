#include "main.h"

/**
 * _printf - Function that produces output according to a format.
 * @format: the string to output
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	char *s, c;
	int i = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		/* for handling char */
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			c = (char)va_arg(args, int);
			putchar(c);
			i += 2; /* this skips %c */
		}
		/* for handling string */
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(args, char *);
			fflush(stdout);
			write(1, s, strlen(s));
			i += 2; /* this skips %s */
		}
		/* for handling % */
		if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar('%');
			 i += 2; /* this skips %% */
		}
		else
		{
			putchar (format[i]);
			i++;
		}
	}
	va_end(args);

	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	return (i);
}
