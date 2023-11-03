#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#define BUFSIZE 8

int main() {
    char buf[BUFSIZE];
    ssize_t nr;

    int fd = open("./test", O_RDONLY | O_NONBLOCK);
    nr = read(fd, buf, BUFSIZE);

    if (nr == -1) {
        switch(errno) {
        case EINTR:
            // try again
            break;
        case EAGAIN:
            // resubmit later
            break;
        default:
            // error
        }
    }
    printf("Read bytes: %s\n", buf);
    return 0;
}

