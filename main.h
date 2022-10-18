#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_int(va_list i);
int printf_string(va_list s);
int print_dec(va_list d);
int print_rev(va_list r);
int printf_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int printf_rot13(va_list R);

/**
  * struct code_format - Struct format.
  *
  * @sc: The specifiers.
  * @f: The function associated.
  */

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* MAIN_H */
