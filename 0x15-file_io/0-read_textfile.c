#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: its letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t nr, nw;
	char *buff;

	if (!filename)
		return (0);

	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nr = read(fn, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);

	close(fn);
	free(buff);

	return (nw);
}
