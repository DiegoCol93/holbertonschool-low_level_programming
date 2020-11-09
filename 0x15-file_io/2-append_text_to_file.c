#include "holberton.h"
/**
 * append_text_to_file - Function that appends text at the end of a file.
 *
 *      Arguments:
 *    @text_content:   - Contents to add into file.
 *      @filename:     - Name of file to append to.
 *
 *       Return:       - 1 On succes, (-1) on failure.
 *
 * |------------ Written by Diego Lopez - November/09/2020. ------------|
 */
int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int len = 0;
	int fd, check = 0;

	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len]; len++)
	{}
	if (filename)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		check = write(fd, text_content, len);
		if (check == -1)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
