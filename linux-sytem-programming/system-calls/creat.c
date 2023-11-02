#include <fcntl.h>
#include <stdio.h>

//
// creat() syscall signatura
// int creat(const char *name, mode_t mode);
//

int main(int argc, char *argv[]) {
    int fd;
    char *filename = argv[1];

    // this call is identical to: open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    // meaning that creat() can be implemented in terms of open()
    fd = creat(filename, 0644);

    if (fd != -1) {
        printf("Created \"%s\" file\n", filename);
    }

    return 0;
}

