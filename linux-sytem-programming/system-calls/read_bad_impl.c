#include <fcntl.h>
#include <unistd.h>

//
// read() signature
// ssize_t read(int fd, void *buf, size_t len);
//

unsigned long word;
ssize_t nr;

int main() {
    int fd;
    fd = open("./test", O_RDONLY);
    nr = read(fd, &word, sizeof(unsigned long));
    if (nr == -1) {
        // log error
    }
    return 0;
}

