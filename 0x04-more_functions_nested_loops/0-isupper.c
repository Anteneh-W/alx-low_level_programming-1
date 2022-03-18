#include "main.h"
/**
 * _isupper - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
