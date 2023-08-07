#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file
 * @filename: text name
 * @letters: letters to be read
 * Return: return
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ab;
	ssize_t y;
	ssize_t x;

	ab = open(filename, O_RDONLY);
	if (ab == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	x = read(ab, buf, letters);
	y = write(STDOUT_FILENO, buf, x);

	free(buf);
	close(ab);
	return (y);
}
