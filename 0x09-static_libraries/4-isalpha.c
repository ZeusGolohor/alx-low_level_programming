#include "main.h"

/**
  * _isalpha - _isalpha
  * @c: first operand.
  * Return: Always an int
  */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
