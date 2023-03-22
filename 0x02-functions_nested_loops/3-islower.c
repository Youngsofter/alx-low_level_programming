#include "main.h"

/**
 * _islower - checks for lowercase characters
 * Return: islower bool 
 */
int _islower(int c)
{
	char lowercase_alphabet = 'a';
	int islower_bool = 0;

	while (lowercase_alphabet <= 'z')
	{
		if (lowercase_alphabet == c)
			islower_bool = 1;
		lowercase_alphabet++;
	}
	return (islower_bool);
}
