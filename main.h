#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
void number(int i);
void string(char *str);
void modifiers(char c, va_list mod);

#endif /* MAIN_H */
