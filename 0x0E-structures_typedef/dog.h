#ifndef WHATDH_H
#define WHATDH_H

/**
 * struct dog - Structure for defining a Dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
