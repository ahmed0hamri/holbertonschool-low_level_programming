#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end
 * @filename: char
 * @text_content: text
 * Return: 0.
 */
int create_file(const char *filename, char *text_content) 
{
	int kjb, n;
	if (!text_content)
		return (n);
	else
		n = strlen(text_content);

	kjb = open(filename, O_CREAT && O_WRONLY && O_TRUNC, 0600);
	if (!text_content)
		;
	{
		close(kjb);
		return (1);
	}
	if (kjb == -1)
		return (-1);
	write(kjb, text_content, n);
	close(fd);
	return (1);
}
