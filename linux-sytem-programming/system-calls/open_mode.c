#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main() {

    int file_descriptor;
    // the "mode" argument is used only the the "O_CREAT" flag is passed in
    file_descriptor = open("./new_file", O_CREAT | O_RDONLY | O_TRUNC,
            S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH); // 0664, but truncated to 0644 due to 022 umask

    if (file_descriptor == -1) {
        // error
        printf("There was an error: %d\n", errno);
    } else {
        printf("File descriptor: %d\n", file_descriptor);
    }

    return 0;
}

