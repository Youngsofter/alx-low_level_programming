#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a variable of type struct dog.
 * @dog_info: struct to initialize
 * @dog_name: Dog's name
 * @dog_age: Dog's age
 * @dog_owner: Dog's owner
 * Return: Nothing.
 */
void init_dog(struct dog *dog_info, char *dog_name, float dog_age, char *dog_owner)
{
	if (dog_info == NULL)
		return;

	dog_info->dog_name = dog_name;
	dog_info->dog_age = dog_age;
	dog_info->dog_owner = dog_owner;
}

