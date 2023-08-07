#include "main.h"
/**
 * create_file - Create a file.
 * @filename:file name
 * @text_content: text content
 * Return: something
 */
int create_file(const char *filename, char *text_content)
{
	int ab, y, hig = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (hig = 0; text_content[hig];)
			hig++;
	}

	ab = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(ab, text_content, hig);

	if (hig == -1 || y == -1)
		return (-1);

	close(ab);

	return (1);
}
