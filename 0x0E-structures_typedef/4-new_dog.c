#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: new dog created or NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, j = 0, k;
dog_t *dog_cp;

dog_cp = malloc(sizeof(dog_t));
if (dog_cp == NULL)
{
return (NULL);
}
while (name[i])
{
i++;
}
while (owner[j])
{
j++;
}
dog_cp->name = malloc(sizeof(dog_cp->name) * i);
if (dog_cp->name == NULL)
{
free(dog_cp);
return (NULL);
}
for (k = 0; k <= i; k++)
{
dog_cp->name[k] = name[k];
}
dog_cp->age = age;
dog_cp->owner = malloc(sizeof(dog_cp->owner) * j);
if (dog_cp->owner == NULL)
{
free(dog_cp->name);
free(dog_cp);
return (NULL);
}
for (k = 0; k <= j; k++)
{
dog_cp->owner[k] = owner[k];
}
return (dog_cp);
}
