#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct structure - structure for functions and percent symbol
 * @signs: symbol
 * @f: chooses appropriate function to execute
 */
struct structure
{
	char *signs;
	int (*f)(va_list);
};

typedef struct structure data;

int comp(const char *format, data functs[], va_list args);
int _printf(const char *format, ...);
int char_(va_list);
int str(va_list);
int p_cent(va_list);
int integer(va_list);
int num(va_list);
int _write_char(char c);

#endif
