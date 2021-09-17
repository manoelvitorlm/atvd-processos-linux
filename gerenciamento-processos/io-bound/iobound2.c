#include <stdio.h>
#include <stdlib.h>
#define STR "arquivo-sys.txt"

int main() {

    FILE *p;
    char str[80], c;

    p = fopen(STR, "r");

    while (!feof(p)) {
        fscanf(p, "%c", &c);
        printf("%c", c);
    }

    fclose(p);
    return(0);
}