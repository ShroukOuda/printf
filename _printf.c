#include "main.h"
/**
 * _printf - check the code.
 * @format: it's a format
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int n, cnt = 0;
	va_list prf;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(prf, format);
	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] != '%' && format[n + 1] != '\\')
			_putchar(format[n]);
		if (format[n] == '%')
			modifiers(format[n + 1], prf);
		cnt++;
	}
	return (cnt);
}
