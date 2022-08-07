#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/**
 * struct prin - structure that contain flag and funtion
 * @flag: character that identify funtion
 * @fn: pointer to funtion
 */
typedef struct prin

{
	char flag;
	char *(*fn)(va_list argu);
} sir;

int _printf(const char *format, ...);
#endif 
