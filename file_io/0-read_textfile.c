#include "main.h"
/**
 * read_textfile -  a function that reads a text file and prints it
 * @filename: name of file (char)
 * @letters: size_t
 * Return: 0 or n
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filo, txt;
	char *texto;

	filo = open(filename, O_RDONLY);
	if (filo == -1)
		return (0);
	texto = malloc(sizeof(char) * letters);
	if (texto == NULL)
		return (0);
	txt = read(filo, texto, letters);
	write(STDOUT_FILENO, texto, txt);
	free(texto);
	close(filo);
	return (txt);
}
