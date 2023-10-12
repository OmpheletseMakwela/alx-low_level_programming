#ifndef _3_CALC_H_
#define _3_CALC_H_

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

#endif /* _3_CALC_H_ */
