#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char c);

/* specifier function*/
int specifier(char c);

/**
 * struct specifier - match the specifier
 * @ver: {s,d,c..}
 * @func: pointer to function
*/
typedef struct specifier
{
	char *ver;
	int (*func)();
} match_f;

/* task 0 - 1*/
int printC(va_list c);
int printS(va_list s);
int printPer(void);
int printD(va_list d);
int printB(va_list b);
int printU(va_list u);
int printO(va_list o);
int printMh(va_list h);
int printMH(va_list H);

/* strs functions*/
int _strlen(char *str);

#endif
