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

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age));
	printf("Onwer: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
