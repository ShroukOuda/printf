#include "main.h"
/**
 * modifiers - check the code.
 * @c: it's a char
 * @mod: it's a va_list
 * Return: Always 0.
 */
void modifiers(char c, va_list mod)
{
	if (c == 'c')
	{
		_putchar(va_arg(mod, int));
	}
	else if (c == '%')
	{
		_putchar('%');
	}
	else if (c == 'd' || c == 'i')
	{
		number(va_arg(mod, int));
	}
	else if (c == 's')
	{
		char *s;

		s = va_arg(mod, char *);
		string(s);
	}
	else
	{
		_putchar(c);
	}
}
