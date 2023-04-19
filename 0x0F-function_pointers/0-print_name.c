/**
 * print_name - Prints a name using a function pointer
 *
 * @name: The name to be printed
 * @f: A pointer to the function used to print the name
 *
 * Description: This function takes a string representing a name and a pointer
 * to a function that prints a string. It calls the specified function, passing
 * the name as an argument, in order to print the name to the standard output
 * stream.
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
