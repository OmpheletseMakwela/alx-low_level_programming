#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - structure for different variables grouped together
 * @name: dog member 1
 * @age: dog member 2
 * @owner: dog member 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif /* MAIN_H */
