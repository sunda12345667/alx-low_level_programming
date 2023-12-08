#include "main.h"
#include <stdlib.h>

/**
 * textfile-  STDOUT text file print.
 * 
 *  read letter number
 * Return: s- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *sup;
	ssize_t ca;
	ssize_t s;
	ssize_t e;

	ca = open(filename, O_RDONLY);
	if (ca == -1)
		return (0);
	sup = malloc(sizeof(char) * letters);
	e = read(ca, sup, letters);
	s = write(STDOUT_FILENO, sup, e);

	free(sup);
	close(ca);
	return (s);
}
