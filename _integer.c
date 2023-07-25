#include "main.h"
#include <stdarg.h>
/**
*print_integer - prints with recursion
*@n: int to print
*@count: pointer to count of chars printed
*@flag: flag = plus or ' '
*@is_start: 1 or 0
*/
void print_integer(long int n, int *count, char flag, int is_start)
{
	if (is_start)
	{
		if (n < 0)
		{
			_putchar('-');
			(*count)++;
			n = -n;
		}
		else if (flag == '+' || flag == ' ')
		{
			_putchar(flag);
			(*count)++;
		}
	}

	if (n / 10)
	{
		print_integer(n / 10, count, flag, 0);
	}
	_putchar('0' + (n % 10));
	(*count)++;
}

/**
*_integer - i and d handle
*@args: the argument list to get the integer from
*@flag: flag character
*@length_modifier: length modifier char
*Return: number of char printed
*/
int _integer(va_list args, char flag, char length_modifier)
{
	long int i;
	int count = 0;

	switch (length_modifier)
	{
		case 'l':
			i = va_arg(args, long int);
			break;
		case 'h':
			i = (short int)va_arg(args, int);
			break;
		default:
			i = va_arg(args, int);
			break;
	}

	if (i == 0)
	{
		if (flag == '+' || flag == ' ')
		{
			_putchar(flag);
			count++;
		}
		_putchar('0');
		return (count + 1);
	}

	if (i == LONG_MIN)
	{
		_putchar('-');
		_putchar('9');
		print_integer(223372036854775808, &count, flag, 0);
		count += 2;
		return (count);
	}

	print_integer(i, &count, flag, 1);

	return (count);
}

