#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
void print_hex_address(void *p_arg, int *nxt_char);


#endif
