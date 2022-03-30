#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: name of the file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, l;

	l = 0;
	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR, 0600);
	if (text_content != NULL)
	{
		while (text_content[l] != '\0')
			l++;
	}
	w = write(o, text_content, l);
	if (w == -1 || o == -1)
		return (-1);

	close(o);

	return (1);
}
