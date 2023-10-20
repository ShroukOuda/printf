#include "main.h"
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
/**
 * number - check the code.
 * @i: it's int
 * Return: Always 0.
 */
void number(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
		number(i / 10);
	_putchar((i % 10) + 48);
}

