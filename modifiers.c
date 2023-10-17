#include "main.h"
/**
 * number - check the code.
 * @num: it's int
 * Return: Always 0.
 */
void number(int num)
{
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
 * Return: Always 0.
 */
void string(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
