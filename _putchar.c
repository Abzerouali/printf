#include <unistd.h>
/**
 * _putchar - Function prints char
 * @s: Char to printe
 * Return: Char
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
