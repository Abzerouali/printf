#include "main.h"

/**
*_hex_lower - %x handle
*@args: List of arguments
*@flag: The flag character
*@length: The length modifier
*Return: num char printed
*/
int _hex_lower(va_list args, char flag, char length)
{
	unsigned long int num_l;
	unsigned short int num_h;
	unsigned int num;
	if (length == 'l')
	{
		num_l = va_arg(args, unsigned long int);
		return (print_long_hex(num_l, 0, flag));
	}
	else if (length == 'h')
	{
		num_h = (unsigned short int)va_arg(args, unsigned int);
		return (print_short_hex(num_h, 0, flag));
	}
	else
	{
		num = va_arg(args, unsigned int);
		return (print_hex(num, 0, flag));
	}
}
/**
*_hex_lower - %x handle
*@args: List of arguments
*@flag: The flag character
*@length: The length modifier
*Return: num char printed
*/ 
int _hex_upper(va_list args, char flag, char length)
{
	unsigned long int num_l;
	unsigned short int num_h;
	unsigned int num;

	if (length == 'l')
	{
		num_l = va_arg(args, unsigned long int);
		return (print_long_hex(num_l, 1, flag));
	}
	else if (length == 'h')
	{
		num_h = (unsigned short int)va_arg(args, unsigned int);
		return (print_short_hex(num_h, 1, flag));
	}
	else
	{
		num = va_arg(args, unsigned int);
		return (print_hex(num, 1, flag));
	}
}

/**
*print_hex - Prints an unsigned integer in hex
*@num: The unsigned integer to print
*@upper: 0 for lowercase letters, 1 for uppercase letters
*@flag: The flag character
*Return: num of char printed
*/
int print_hex(unsigned int num, int upper, char flag)
{
	unsigned int i = num;
	int count = 0;
	char pres = upper ? 'A' - 10 : 'a' - 10;

	if (flag == '#')
	{
		_putchar('0');
		_putchar(upper ? 'X' : 'x');
		count += 2;
	}

	if (i / 16)
		count += print_hex(i / 16, upper, '\0');
	count += _putchar((i % 16) < 10 ? (i % 16) + '0' : (i % 16) + pres);

	return (count);
}

/**
*print_long_hex - Prints an unsigned long integer in hex
*@num: The unsigned long integer to print
*@upper: 0 for lowercase letters, 1 for uppercase letters
*@flag: The flag character
*Return: number of char printed
*/
int print_long_hex(unsigned long int num, int upper, char flag)
{
	unsigned long int i = num;
	int count = 0;
	char pres = upper ? 'A' - 10 : 'a' - 10;

	if (flag == '#')
	{
		_putchar('0');
		_putchar(upper ? 'X' : 'x');
		count += 2;
	}

	if (i / 16)
		count += print_long_hex(i / 16, upper, '\0');
	count += _putchar((i % 16) < 10 ? (i % 16) + '0' : (i % 16) + pres);

	return (count);
}

/**
*print_short_hex - Prints an unsigned short integer in hexadecimal
*@num: The unsigned short integer to print
*@upper: 0 for lowercase letters, 1 for uppercase letters
*@flag: The flag character
*Return: number of char printed
*/ 
int print_short_hex(unsigned short int num, int upper, char flag)
{
	unsigned short int i = num;
	int count = 0;
	char pres = upper ? 'A' - 10 : 'a' - 10;

	if (flag == '#')
	{
		_putchar('0');
		_putchar(upper ? 'X' : 'x');
		count += 2;
	}

	if (i / 16)
		count += print_short_hex(i / 16, upper, '\0');
	count += _putchar((i % 16) < 10 ? (i % 16) + '0' : (i % 16) + pres);

	return (count);
}
