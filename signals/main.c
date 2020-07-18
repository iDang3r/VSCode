#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void handler_int() {
    write(STDOUT_FILENO, "Hmmm, want to kill me?!\n", 25);
    exit(0);
}

void handler_term() {
    write(STDOUT_FILENO, "Terminated...\n", 15);
    exit(0);
}

int main() {

    signal(SIGINT, handler_int);
    signal(SIGTERM, handler_term);

    while (1) {
        printf("PID: %d\n", getpid());
        sleep(3);
    }

    printf("THE END\n");

    return 0;
}