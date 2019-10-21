#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - function to create new dog struct
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namlen, ownlen, i;
	dog_t *newpup;

	namlen = ownlen = 0;

	while (name[namlen++])
		;
	while (owner[ownlen++])
		;

	newpup = malloc(sizeof(dog_t));
	if (newpup == NULL)
		return (NULL);
	newpup->name = malloc(namlen * sizeof(newpup->name));
	if (newpup == NULL)
		return (NULL);
	for (i = 0; i < namlen; i++)
		newpup->name[i] = name[i];

	newpup->age = age;

	newpup->owner = malloc(ownlen * sizeof(newpup->owner));
	if (newpup == NULL)
		return (NULL);
	for (i = 0; i < ownlen; i++)
		newpup->owner[i] = owner[i];
	return (newpup);
}
