#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// open() syscall signatures
//
// int open(const char *name, int flags);
// int open(const char *name, int flags, mode_t mode);
//
// A process has by default 3 file descriptors: 0 or stdin, 1 or stdout, 2 or stderr
//

int main() {

    int file_descriptor;
    file_descriptor = open("./test", O_RDONLY);

    printf("File descriptor: %d\n", file_descriptor);

    return 0;
}

