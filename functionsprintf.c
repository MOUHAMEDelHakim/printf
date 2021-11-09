#include "main.h"
/**
 * p_char - prints a character
 * @arg: The character to print
 *
 * Return: 1
 */
int p_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
/**
 * p_string - prints a string
 * @arg: The string to print
 *
 * Return: i
 */
int p_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i = 0;

	if (s == NULL)
	s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 *p_percent - print percent
 *@arg: argument of type of va_list
 * Return: integer
 */
int p_percent(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}

/**
 * p_int - function that prints an integer with helper function.
 * @arg: The string to print
 *
 * Return: counter
 *
 */
int p_int(va_list arg)
{
	int n = va_arg(arg, int);
	int count = 0, rest = 1;
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}

	while ((x / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		count++;
	}
	return (count);
}
