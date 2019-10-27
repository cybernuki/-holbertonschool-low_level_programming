#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void put_char(va_list argument);
void put_string(va_list argument);
void put_float(va_list argument);
void put_integer(va_list argument);


/**
 * struct function_map - struct map
 * @type: is the representative char to the function
 * @f: is the function associated
 */
typedef struct function_map
{
	char type;
	void (*f)(va_list);
} map;

#endif
