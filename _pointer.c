#include "main.h"
#include <stdarg.h>
/**
* _pointer - p handle
* @args: args list
* Return: num of chars printed
*/
int _pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	uintptr_t address = (uintptr_t)ptr;
	int count = 0;
	char hexa_buffer[16];
	int index = 0;
	int i;
	char *str;

	if (ptr == NULL)
	{
		str = "(nil)";
		for (i = 0; str[i] != '\0'; i++)
		{
			count += _putchar(str[i]);
		}
		return (count);
	}

	count += _putchar('0');
	count += _putchar('x');

	while (address > 0)
	{
		int remainder = address % 16;

		if (remainder < 10)
			hexa_buffer[index++] = '0' + remainder;
		else
			hexa_buffer[index++] = 'a' + (remainder - 10);

		address /= 16;
	}
	for (i = index - 1; i >= 0; i--)
	{
		count += _putchar(hexa_buffer[i]);
	}

	return (count);
}
