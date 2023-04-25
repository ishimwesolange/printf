#define MAIN_H
#define <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#define UNUSED (x) (void) (x)
 #define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4 #define F HASH 8
#define F_SPACE 16

/*SIZES*/
#define S LONG 2
#define S SHORT 1
/**
*struct fmt - Struct op
*
*@fmt: The format.
* @fn: The function associated.
*/
struct fmt
{
char fmt; 
int (*fn) (va_list, char[], int, int, int, int);
};

/**
*typedef struct fmt fmt_t - Struct op

