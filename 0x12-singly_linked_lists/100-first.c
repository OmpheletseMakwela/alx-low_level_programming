#include <stdio.h>

void my_constructor(void) __attribute__((constructor));

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main()
{
	printf("Main function has started.\n");
	return (0);
}
