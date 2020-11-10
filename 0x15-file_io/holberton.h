#ifndef __FILE___H_
#define __FILE___H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* 0. Reads a text file and prints it to the POSIX standard output. */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1. Creates a file. */
int create_file(const char *filename, char *text_content);

/* 2. Appends text at the end of a file. */
int append_text_to_file(const char *filename, char *text_content);

/* 4. Copies a file. */
int copy_file(char *file_from, char *file_to);

/* 4.1 Clears a char buffer of 1024 bytes. */
void clear_buff(char *buff);

#endif /* __FILE___H_ */
