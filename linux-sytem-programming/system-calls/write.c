#include <fcntl.h>
#include <string.h>
#include <stdio.h>

// write() signature
// ssize_t write(int fd, cosnt void *buf, size_t count);

int main() {
    const char *buf = "My ship is solid!\n";
    ssize_t nr;
    int fd = open("./test", O_RDWR);

    // partial write checks may be needed for devices
    // like sockets, and in those cases a loop may be
    // needed to ensure the complete write of those btyes
    nr = write(fd, buf, strlen(buf));
    if (nr == -1) {
        printf("Error");
    }
    return 0;
}

