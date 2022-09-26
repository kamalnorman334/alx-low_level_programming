#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: (s)
 **/

{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');
}
