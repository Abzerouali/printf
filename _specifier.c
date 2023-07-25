#include "main.h"
/**
* _specifier - Conversion specifiers handle
* @specifier: The conversion specifier character
* @args: The variable argument list
* @flag: The flag character
* @length: The length modifier character
* Return: Count of chars printed
*/
int _specifier(char specifier, va_list args, char flag, char length)
{
	int count = 0;

	switch (specifier)
	{
		case 'c':
			count += _char(args);
			break;
		case 's':
			count += _string(args);
			break;
		case '%':
			count += _putchar('%');
			break;
		case 'd':
		case 'i':
			count += _integer(args, flag, length);
			break;
		default:
			count += _ext_specifier(specifier, args, flag, length);
			break;
	}

	return (count);
}

/**
* _ext_specifier - Extra conversion specifiers handle
* @specifier: The conversion specifier character
* @args: args list
* @flag: The flag character
* @length: The length modifier character
* Return: Count of chars printed
*/
int _ext_specifier(char specifier, va_list args, char flag, char length)
{
	int count = 0;

	switch (specifier)
	{
		case 'b':
			count += _binary(args);
			break;
		case 'u':
			count += _unsigned_int(args, length);
			break;
		case 'o':
			count += _octal(args, flag, length);
			break;
		case 'x':
			count += _hex_lower(args, flag, length);
			break;
		case 'X':
			count += _hex_upper(args, flag, length);
			break;
		case 'S':
			count += _custom_S(args);
			break;
		case 'p':
			count += _pointer(args);
			break;
		default:
			count += _putchar('%');
			count += _putchar(specifier);
			break;
	}

	return (count);
}
