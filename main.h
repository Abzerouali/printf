#ifndef printf_h
#define printf_h

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>


int _putchar(char c);
int _printf(const char *format, ...);
int _char(va_list args);
int _string(va_list args);
void print_integer(long int n, int *count, char flag, int is_start);
int _integer(va_list args, char flag, char length_modifier);
int _binary(va_list args);
int _unsigned_int(va_list args, char length);
int print_unsigned_int(unsigned int num);
int print_unsigned_long_int(unsigned long int num_l);
int print_unsigned_short_int(unsigned short int num_h);
int _octal(va_list args, char flag, char length);
int print_octal(unsigned int num, char flag);
int print_short_octal(unsigned short int num_h, char flag);
int print_long_octal(unsigned long int num_l, char flag);
int _hex_lower(va_list args, char flag, char length);
int _hex_upper(va_list args, char flag, char length);
int print_hex(unsigned int num, int upper, char flag);
int print_short_hex(unsigned short int num_h, int upper, char flag);
int print_long_hex(unsigned long int num_l, int upper, char flag);
int _specifier(char specifier, va_list args, char flag, char length);
int _ext_specifier(char specifier, va_list args, char flag, char length);
int print_hex_char(unsigned char c, char flag);
int _custom_S(va_list args);
int _pointer(va_list args);
int _flag_and_specifier(const char **format, va_list args, int *count);

#endif

