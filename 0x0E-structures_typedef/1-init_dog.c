#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = strdup(name);
    d->age = age;
    d->owner = strdup(owner);
}
