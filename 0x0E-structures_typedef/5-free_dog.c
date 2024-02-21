#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to a struct dog to be freed
 *
 * Description: This function frees the memory allocated for a struct dog.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{

		free(d->name);
		free(d->owner);

		free(d);
	}
}
