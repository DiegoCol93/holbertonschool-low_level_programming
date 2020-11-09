#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints it to the std output.
 *
 *   Arguments:
 *   @filename:  - Pointer to name of the file to print.
 *    @letters:  - Number of letters to read and print.
 *
 *     Return:   - Number of bytes read and written from the file.
 *                 0 if open(), read() or write() fails.
 *
 * |---------- Written by Diego Lopez - November/09/2020. ----------|
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int nbytes = 0;
	int fd, check = 0;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff)
	{
		if (filename)
		{
			fd = open(filename, O_RDONLY);

			if (fd == -1)
			{
				return (0);
			}
			nbytes = check = read(fd, buff, letters);
			if (check == -1)
				return (0);
			write(STDOUT_FILENO, buff, letters);
			close(fd);
		}
	}
	return (nbytes);
}
