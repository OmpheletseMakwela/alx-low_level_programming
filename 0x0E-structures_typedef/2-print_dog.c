#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - A prototype function
 * @d: Dog member
 * struct - Structure for a dog
 * return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("name : %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("age : %f\n", (d->age));
	printf("onwer : %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
