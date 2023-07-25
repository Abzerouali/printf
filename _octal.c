#include "main.h"
#include <stdarg.h>
/**
*_octal - o handle
*@args: The argument list to get the string from
*@flag: flag character
*@length: The length modifier
*Return: num of char printed
*/
int _octal(va_list args, char flag, char length)
{
	unsigned long int long_n;
	unsigned short int short_n;
	unsigned int num;

	if (length == 'l')
	{
		long_n = va_arg(args, unsigned long int);
		return (print_long_octal(long_n, flag));
	}
	else if (length == 'h')
	{
		short_n = (unsigned short int)va_arg(args, unsigned int);
		return (print_short_octal(short_n, flag));
	}
	else
	{
		num = va_arg(args, unsigned int);
		return (print_octal(num, flag));
	}
}
/**
*print_octal - Prints an unsigned int in octal
*@num: The unsigned integer to print
*@flag: flag character
*Return: num of chars printed
*/
int print_octal(unsigned int num, char flag)
{
	unsigned int i = num;
	int count = 0;

	if (flag == '#')
	{
		_putchar('0');
		count++;
	}

	if (i / 8)
		count += print_octal(i / 8, '\0');
	count += _putchar((i % 8) + '0');

	return (count);
}

/**
*print_long_octal - Prints an unsigned long int in octal
*@num_l: The unsigned long integer to print
*@flag: flag character
*Return: num of chars printed
*/
int print_long_octal(unsigned long int num_l, char flag)
{
	unsigned long int i = num_l;
	int count = 0;

	if (flag == '#')
	{
		_putchar('0');
		count++;
	}

	if (i / 8)
		count += print_long_octal(i / 8, '\0');
	count += _putchar((i % 8) + '0');

	return (count);
}

/**
*print_short_octal - Prints an unsigned short int in octal
*@num_h: The unsigned short integer to print
*@flag: flag character
*Return: number of chars printed
*/
int print_short_octal(unsigned short int num_h, char flag)
{
	unsigned short int i = num_h;
	int count = 0;

	if (flag == '#')
	{
		_putchar('0');
		count++;
	}

	if (i / 8)
		count += print_short_octal(i / 8, '\0');
	count += _putchar((i % 8) + '0');

	return (count);
}
