#include <string.h>
#include <sys/types.h>
#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content);

/**
 * create_file - Creates a file with specified permissions and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content) {
    int fd, write_status;
    mode_t permissions = S_IRUSR | S_IWUSR; 

    if (filename == NULL)
        return -1;

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
    if (fd == -1)
        return -1;

    if (text_content != NULL) {
        write_status = write(fd, text_content, strlen(text_content));
        if (write_status == -1) {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}

/**
 * strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
size_t strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
