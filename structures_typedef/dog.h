#ifndef DOGS_H
#define DOGS_H

/**
 * struct dog - Characteristics of dogs
 *
 * @name: The doggo's name
 * @age: The doggo's age
 * @owner: The doggo's owner
 *
 * Description: Characteristics of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogt *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
