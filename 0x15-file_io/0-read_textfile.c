#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

size_t read_textfile(const char *filename, size_t letters);

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file cannot be opened or read, or if write fails.
 */
size_t read_textfile(const char *filename, size_t letters) {
int fd;
size_t read_count, write_count;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL) {
close(fd);
return (0);
}
read_count = read(fd, buffer, letters);
if (read_count == -1) {
free(buffer);
close(fd);
return (0);
}
write_count = write(STDOUT_FILENO, buffer, read_count);
if (write_count == -1 || write_count != read_count) {
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (read_count);
}
