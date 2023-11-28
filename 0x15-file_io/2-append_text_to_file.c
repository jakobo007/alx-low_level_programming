#include <string.h>
#include <sys/types.h>
#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
int append_text_to_file(const char *filename, char *text_content);

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content) {
    int fd, write_status;

    if (filename == NULL)
        return -1;

    // Open the file in append mode, if it doesn't exist return -1
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return -1;

    if (text_content != NULL) {
        // Write the content to the file
        write_status = write(fd, text_content, _strlen(text_content));
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
