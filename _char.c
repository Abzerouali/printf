#include "main.h"
#include <stdarg.h>
/**
* _char - c handle
* @args: args list
* Return: the counter of chars printed
*/
int _char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
