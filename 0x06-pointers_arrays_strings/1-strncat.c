#include "main.h"

/**
 * _strncat - concatenates n bytes of a string to a destination
 * @dest: destination string
 * @src: source string
 * @n: n byte determinant
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0;
	int s2 = 0;

	while (*(dest + s1) != '\0') /**gets the character
				      * at index s1 and checks if
				      * it's the null terminator
				      */
		s1++;
	while (s2 < n)
	{
		*(dest + s1) = *(src + s2); /**increases dest and saves
					     * src in it, till src == null
					     * terminator
					     */
		if (*(src + s2) == '\0')
			break;
		s1++;
		s2++;
	}
	return (dest);
}
