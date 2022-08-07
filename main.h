#ifndef _MAIN_H
#define _MAIN_H
#define BUFF_SIZE 1024
/**
 * struct fmt - Struct op
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 * @fmt: The format.
 * @fm_t: The function associated.
 */
int _printf(const char *format, ...);
#endif 
