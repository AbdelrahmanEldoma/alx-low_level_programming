#include "main.h"
/**
*is_palindrome-  checks if is palindrome
*@s: int type
*Return: char type
**/
int is_palindrome(char *s)
{
	int first, last;

	first = 0;
	last = _strlen_recursion(s) - 1;
	return (is_palindrome(s, first, last));
}

/**
*palindrome- used of check
*@s: string
*@first: a number
*@last: a number
*Return: the value
**/
int palindrome(char *s, int first, int last)
{
	if (first > last)
{
	return (1);
}
	else if (s[first] == s[last])
{
	return (palindrome(s, first + 1, last - 1));
}
	else
	return (0);
}
#include "main.h"
/**
*_strlen_recursion- the function used for recursion
*@s: a string
*
*Return: length of string or zero
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}

