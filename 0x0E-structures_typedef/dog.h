#ifndef DOG_H
#define DOG_H
/**
 * struct dog - prints inf about a dog
 * @name: pointer to name
 * @age: age of the dog
 * @owner: pointer to the owner's name
 *
 * Description: information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
