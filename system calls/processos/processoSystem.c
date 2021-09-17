#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    printf("pid do pai: %d\n", getpid());
    system("./processoTeste");
}
