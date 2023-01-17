#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new element of type struct dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int x, iname, iowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	for (iname = 0; name[iname]; iname++)
		;
	for (iowner = 0; owner[iowner]; iowner++)
		;
	p_dog->name = malloc(iname + 1);
	p_dog->owner = malloc(iowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (x = 0; x < iname; x++)
		p_dog->name[x] = name[x];
	p_dog->name[x] = '\0';

	p_dog->age = age;

	for (x = 0; x < iowner; x++)
		p_dog->owner[x] = owner[x];
	p_dog->owner[x] = '\0';

	return (p_dog);
}
