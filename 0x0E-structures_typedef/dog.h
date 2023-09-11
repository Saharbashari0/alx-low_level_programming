#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 * description: just long dog struct in a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif