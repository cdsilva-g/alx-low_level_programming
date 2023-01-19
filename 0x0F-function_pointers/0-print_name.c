/**
 * print_name - function to print name
 * @name: name to print
 * @f: function pointer thta doesn't return anything
 * Return: Always 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
