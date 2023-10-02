#include "main.h"

/**
 * create:file.
 * @namefile: create a pointer that point to the name of the file.
 * @text_content: A pointer to a string to write to the file.
 *
 * If the function does not response  - -1. or -1
 *         
 */
int create_file(const char *filename, char *text_content)
{
	int ca, t, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ca = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(ca, text_content, len);

	if (ca == -1 || t == -1)
		return (-1);

	close(ca);

	return (1);
}
