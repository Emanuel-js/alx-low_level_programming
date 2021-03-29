#include "header.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: string pointer
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters
 *         0 if file cannot be opened, is NULL and if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, read_f, write_f;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_f = read(fd, buf, letters);

	if(read_f == -1)
		return (0);

	write_f =  write(STDOUT_FILENO, buf, read_f);

	if (write_f == -1)
		return (0);

	close(fd);

	free(buf);

	return (write_f);
}
