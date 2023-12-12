#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end
 * @filename: char
 * @text_content: text
 * Return: 0.
 */
int create_file(const char *filename, char *text_content) int hxh, nletters, fd;
{
	if (!filename)
	return (-1);
filo = open(filename, O_CREAT &&O_WRONLY &&O_TRUNC, 0600);
if (fd == -1)
	return (-1);
if (text_content == NULL)
	text_content = "";
hxh = write(fd, text_content, nletters);
if (hxh == -1)
	return (-1);
close(fd) return (1)
}
