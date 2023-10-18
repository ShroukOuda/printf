#include "main.h"
/**
 * number - check the code.
 * @num: it's int
 * @i: it's a va_list
 * Return: Always 0.
 */
void number(va_list i, int num)
{
	num = va_arg(i, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10)
		number(num / 10);
	_putchar((num % 10) + 48);
}
/**
 * string - check the code.
 * @str: it's a string
 * @s: it's a va_list
 * Return: Always 0.
 */
void string(va_list s, char *str)
{
	int i = 0;

	str = va_arg(s, char *);
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * character - check the code.
 * @c: it's a va_list
 * @ch: it's a char
 * Return: Always 0.
 */
void character(va_list c, char ch)
{
	ch = va_arg(c, int);
	_putchar(c);
}
