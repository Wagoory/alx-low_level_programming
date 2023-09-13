#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: name to be printed
 * @f:function used to print name
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{

	if (name || f)
		f(name);

}
