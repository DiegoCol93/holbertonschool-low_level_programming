#include "holberton.h"
/**
 * main         - Program that copies the contents of a file into another file.
 *
 *  Arguments:
 *    @argc:    - Number of arguments, Always 3.
 *    @argv:    - Array of strings of corresponding arguments.
 *
 * Return: 0 on completion.
 *         97 if # of arguments is not correct.
 *         98 if cannot read() or open() from source file.
 *         99 if cannot open() or write() the target file.
 *         100 if cannot close a file descriptor.
 *
 * |--------------- Written by Diego Lopez - November/09/2020. ---------------|
 */
int main(int argc, char **argv)
{
	int check = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	check =	copy_file(argv[1], argv[2]);
	if (check == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (check == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n",
			argv[2]);
		exit(99);
	}
	return (0);
}
/**
 * copy_file    - Reads file_from, and writes contents in file_to.
 *
 *  Arguments:
 * @file_from:  - File to read from.
 *   @file_to:  - File to copy to.
 *
 *   Return:    - 0 on completion,
 *                1 if failed with file_from,
 *                2 if failed with file_to,
 *                100 if failed to close a file.
 *
 * |--------- Written by Diego Lopez - November/09/2020. ---------|
 */
int copy_file(char *file_from, char *file_to)
{
	char buff[1024];
	int fd, fd1, check0;

		fd = open(file_from, O_RDONLY);
		if (fd == -1)
			return (1);
		fd1 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd1 == -1)
			return (2);
		while ((check0 = read(fd, buff, 1024)) != 0)
		{
			if (check0 == -1)
				return (1);
			if (write(fd1, buff, check0) == -1)
				return (2);
			if (check0 == 1024)
				clear_buff(buff);
		}
		if (close(fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd);
			exit(100);
		}
		if (close(fd1) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				fd1);
			exit(100);
		}
	return (0);
}
/**
 * clear_buff - Clears a char buffer of 1024 bytes.
 *
 * Arguments:
 *   @buff:   - Target buffer to clear.
 *
 * |- Written by Diego Lopez - November/09/2020. -|
 */
void clear_buff(char *buff)
{
	int i;

	for (i = 0; i < 1024; i++)
		buff[i] = 0;
}
