#include "main.h"
/**
 * _printf - check the code.
 * @format: it's a format
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	unsigned int n, i, cnt = 0;
	char *s;
	va_list prf;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(prf, format);
	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] != '%' && format[n] != '\\')
			_putchar(format[n]);
		if (format[n] == '%' || format[n] == '\\')
		{
			if (format[n + 1] == 'c')
			{
				_putchar(va_arg(prf, int));
			}
			else if (format[n + 1] == '%')
			{
				_putchar('%');
			}
			else if (format[n + 1] == 's')
			{
				s = va_arg(prf, char *);
				string(s);
			}
			else if (format[n] == '\\' && format[n + 1] == 'n')
			{
				_putchar('\n');
			}
			else if (format[n + 1] == 'd' || format[n + 1] == 'i')
			{
				i = va_arg(prf, int);
				number(i);
			}
			n++;
		}
	cnt++;
	}
return (cnt);
}
