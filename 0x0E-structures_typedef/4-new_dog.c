#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog_t structure.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Return: Pointer to the new dog_t structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int name_len, owner_len;

/* Calculate the lengths of the name and owner */
name_len = strlen(name);
owner_len = strlen(owner);

/* Allocate memory for the new dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

/* Allocate memory for the copied name and owner */
name_copy = malloc((name_len + 1) * sizeof(char));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
owner_copy = malloc((owner_len + 1) * sizeof(char));
if (owner_copy == NULL)
{
free(new_dog);
free(name_copy);
return (NULL);
}

/* Copy the name and owner into the new structure */
strcpy(name_copy, name);
strcpy(owner_copy, owner);

/* Assign the copied name and owner to the new dog structure */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

/* Return the new dog structure */
return (new_dog);
}
