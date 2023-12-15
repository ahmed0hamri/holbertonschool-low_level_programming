#include "main.h"
/**
 * create_file - Create a function that creates a file.
 * @filename: char
 * @text_content: text
 * Return: 0.
 */
int create_file(const char *filename, char *text_content)
{
	int kjb, n;

	if (!text_content)
		n = 0;
	else
		n = strlen(text_content);

	kjb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
	{
		close(kjb);
		return (1);
	}
	if (kjb == -1)
		return (-1);
	write(kjb, text_content, n);
	close(kjb);
	return (1);
}
