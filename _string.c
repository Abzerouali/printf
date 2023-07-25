#include "main.h"
#include <stdarg.h>
/**
* _string - s handle
* @args: The argument list to get the string from
* Return: num of chars printed
**/
int _string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0, i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
