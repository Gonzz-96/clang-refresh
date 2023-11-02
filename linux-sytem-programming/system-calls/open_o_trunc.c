#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main() {

    int file_descriptor;
    // O_TRUNC will drop file length to zero upon opening (if the file exists)
    // If it doesn't, the call wil fail
    char *nonexisting_file_name = "./doesnotexit";
    // an existing file is: "./test"
    file_descriptor = open(nonexisting_file_name, O_WRONLY | O_TRUNC); // will fail on purpose

    if (file_descriptor == -1) {
        // error
        printf("There was an error: %d\n", errno);
    } else {
        printf("File descriptor: %d\n", file_descriptor);
    }

    return 0;
}

