#include "main.h"
#include <stdarg.h>
/**
* _custom_S - s handle
* @args: args list
* Return: num char printed
*/
int _custom_S(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, i;
	char flag = '\0';

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			count += print_hex_char(str[i], flag);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

/**
* print_hex_char - Prints an hexadecimal value
* @c: The character to print as hex
* @flag: The flag character
* Return: num char printed
*/
int print_hex_char(unsigned char c, char flag)
{
	char hex_dig[] = "0123456789ABCDEF";
	int count = 0;

	(void)flag;
	_putchar('\\');
	_putchar('x');
	_putchar(hex_dig[(c >> 4) & 0xF]);
	_putchar(hex_dig[c & 0xF]);

	count += 4;

	return (count);
}
