#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters:  number of letters it should read and print
 * @filename: name of the file
 * Return: number of letters printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buf);
		return (0);
	}
	r = read(o, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	close(o);
	free(buf);

	return (w);
}
