#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name of the file
 * @text_content: content of the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fn;
	int cletters;
	int rw;

	if (!filename)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fn == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (cletters = 0; text_content[cletters]; cletters++)

	rw = write(fn, text_content, cletters);

	if (rw == -1)
		return (-1);
	close(fn);

	return (1);
}
