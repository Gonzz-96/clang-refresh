#include <syslog.h>
#include <stdio.h>

int main() {

    openlog(NULL, LOG_PID | LOG_NDELAY, LOG_USER);

    for (int i = 0; i < 10; i++) {
        syslog(7, "Log from Gonz'program #%d", i);
    }

    closelog();
}

