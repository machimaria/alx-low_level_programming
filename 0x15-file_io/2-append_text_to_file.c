#include "main.h"
/**
 * append_text_to_file - function that appends text
 * at the end of a file.
 * @filename: the file name
 * @text_content: the content of the text
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	int cletters;
	int rw;

	if (!filename)
		return (-1);
	fn = open(filename, O_WRONLY | O_APPEND);

		if (fn == -1)
			return (-1);

	if (text_content)
	{
		for (cletters = 0; text_content[cletters]; cletters++)
			;
		rw = write(fn, text_content, cletters);

		if (rw == -1)
			return (-1);
	}
	close(fn);

	return (1);
}
