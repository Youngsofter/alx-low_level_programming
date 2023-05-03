#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the content of struct dog.
 * @dog_ptr: pointer to the struct
 * Return: content.
 */
void print_dog(struct dog *dog_ptr)
{
	if (dog_ptr)
	{
		if (!dog_ptr->name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", dog_ptr->name);
		printf("Age: %f\n", dog_ptr->age);
		if (!dog_ptr->owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", dog_ptr->owner);
	}
}

