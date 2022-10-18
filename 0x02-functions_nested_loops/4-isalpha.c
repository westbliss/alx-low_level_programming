#include "main.h"
/**
 * _isalpha - check for alphabetic char
 * @c: the char to be checked
 * Return: 1 if the char is letter lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'A'))
		return (1);
	else
		return (0);
}
