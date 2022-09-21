#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int indx1 = 0, indx2;
