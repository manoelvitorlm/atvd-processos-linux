#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {

    pid_t pid;

    if ((pid = fork()) < 0) {
        perror("fork");
        exit(1);
    }

    if (pid == 0)
        printf("pid do filho: %d\n", getpid());

    else
        printf("pid do pai: %d\n", getpid());
}