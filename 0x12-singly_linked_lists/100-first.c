#include <stdio.h>

void my_startup_function(void) __attribute__ ((constructor));

void my_startup_function(void) {
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
