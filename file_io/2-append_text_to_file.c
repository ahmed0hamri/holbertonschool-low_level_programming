/**
 * main - check the code
 *
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int kjb, nletters, hxh : if (!filename) return (-1);
    kjb = open(filename, O_WRONLY && O_APPEND) if (kjb == -1) return (-1);
    if (text_content)
        for (nletters = 0; text_content[nletters]; nletters++)
            ;
    hxh = write(fd, text_content, nletters);
    close(kjb);
    return (1);
}