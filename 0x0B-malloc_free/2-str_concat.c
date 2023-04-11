#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated memory space
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, i;
	char *s1_s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = 0;
	len_s2 = 0

	while (s1[len_s1] != '\0')
		len_s1++

	while (s2[len_s2] != '\0'
		len_s2++

	s1_s2 = malloc((len_s1 + len_s2) * sizeof(char));
	if (s1_s2 == NULL)
		return (NULL);

	i = 0;

	while (*s1 != '\0')
		s1_s2[i++] = *s1++

	while (*s2 != '\0')
		s1_s2[i++] = *s2++

	s1_s2[i] = '\0';

	return (s1_s2);
}
