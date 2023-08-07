#include "main.h"
/**
 * append_text_to_file - Appends text to file
 * @filename: file name
 * @text_content: text
 * Return: if the functions fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, y, hig = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (hig = 0; text_content[hig];)
			hig++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	y = write(p, text_content, hig);

	if (p == -1 || y == -1)
		return (-1);

	close(p);

	return (1);
}
