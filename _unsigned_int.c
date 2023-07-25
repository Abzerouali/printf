#include "main.h"
#include <stdarg.h>
/**
* _unsigned_int - u handle
* @args: The argument list to get the string from
* @length: The length modifier
* Return: num of chars printed
*/
int _unsigned_int(va_list args, char length)
{
	unsigned long int num_l;
	unsigned short int num_h;
	unsigned int num;

	if (length == 'l')
	{
		num_l = va_arg(args, unsigned long int);
		return (print_unsigned_long_int(num_l));
	}
	else if (length == 'h')
	{
		num_h = (unsigned short int)va_arg(args, unsigned int);
		return (print_unsigned_short_int(num_h));
	}
	else
	{
		num = va_arg(args, unsigned int);
		return (print_unsigned_int(num));
	}
}

/**
* print_unsigned_int - Prints an unsigned integer
* @num: The unsigned int to print
* Return: num of chars printed
*/
int print_unsigned_int(unsigned int num)
{
	unsigned int i = num;
	int count = 0;

	if (i / 10)
		count += print_unsigned_int(i / 10);
	count += _putchar((i % 10) + '0');

	return (count);
}

/**
* print_unsigned_long_int - Prints an unsigned long int
* @num_l: The unsigned long int to print
* Return: num of chars printed
*/
int print_unsigned_long_int(unsigned long int num_l)
{
	unsigned long int i = num_l;
	int count = 0;

	if (i / 10)
		count += print_unsigned_long_int(i / 10);
	count += _putchar((i % 10) + '0');

	return (count);
}

/**
* print_unsigned_short_int - Prints an unsigned short int
* @num_h: The unsigned short int to print
* Return: num of chars printed
*/
int print_unsigned_short_int(unsigned short int num_h)
{
	unsigned short int i = num_h;
	int count = 0;

	if (i / 10)
		count += print_unsigned_short_int(i / 10);
	count += _putchar((i % 10) + '0');

	return (count);
}
