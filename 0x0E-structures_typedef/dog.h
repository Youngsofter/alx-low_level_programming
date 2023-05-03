#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for a basic dog
 * @dog_name: Dog's name
 * @dog_age: Dog's age
 * @dog_owner: Dog's owner
 * Description: data structure for a dog
 */
struct dog
{
	char *dog_name;
	float dog_age;
	char *dog_owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *dog_info, char *dog_name, float dog_age, char *dog_owner);
void print_dog(struct dog *dog_info);
dog_t *new_dog(char *dog_name, float dog_age, char *dog_owner);
void free_dog(dog_t *dog_info);
#endif

