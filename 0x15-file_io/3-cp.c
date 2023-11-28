#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int exit_code, const char *message, const char *arg, int fd);

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t read_bytes, write_status;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        print_error_and_exit(97, "Usage: cp file_from file_to\n", NULL, 0);
    }

    
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1], 0);
    }


    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1) {
        close(fd_from);
        print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2], 0);
    }

    
    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        write_status = write(fd_to, buffer, read_bytes);
        if (write_status == -1) {
            close(fd_from);
            close(fd_to);
            print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2], 0);
        }
    }

    
    if (read_bytes == -1) {
        close(fd_from);
        close(fd_to);
        print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1], 0);
    }

    
    if (close(fd_from) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", NULL, fd_from);
    }

    if (close(fd_to) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", NULL, fd_to);
    }

    return 0;
}

void print_error_and_exit(int exit_code, const char *message, const char *arg, int fd) {
    if (arg != NULL) {
        dprintf(STDERR_FILENO, message, arg);
    } else {
        dprintf(STDERR_FILENO, message, fd);
    }
    exit(exit_code);
}
