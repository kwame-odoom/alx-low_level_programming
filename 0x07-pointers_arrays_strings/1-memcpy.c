#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @num: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
