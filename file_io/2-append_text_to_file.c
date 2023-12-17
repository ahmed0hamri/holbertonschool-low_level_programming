#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int kjb, nletters;

	if (text_content == NULL)
		nletters = 0;
	else
		(nletters = strlen(text_content));
	kjb = open(filename, O_CREAT | O_WRONLY | O_APPEND,0600);
	if (kjb == -1)
		return (-1);
	if (!text_content)
	{
		close(kjb);
		return(0);

	}
	
	write(kjb, text_content, nletters);
	close(kjb);
	return (1);
}
