/**
 * free_dog - Frees the memory allocated for a struct dog.
 * @d: The pointer to the struct dog to be freed.
 *
 * Return: Nothing.
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
