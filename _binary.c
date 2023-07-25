#include "main.h"

/**
* _binary - b handle
* @args: Args list
* Return: The number of chars printed
*/
int _binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int char_count = 0;
	unsigned int mask = 1u << 31;

	while ((mask & num) == 0 && mask != 0)
	{
		mask >>= 1;
	}

	while (mask != 0)
	{
		if ((num & mask) == 0)
			char_count += _putchar('0');
		else
			char_count += _putchar('1');
		mask >>= 1;
	}

	if (char_count == 0)
		char_count += _putchar('0');
	return (char_count);
}
