#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buf[8];
    if (argc > 1) {
        strcpy(buf, argv[1]); // Vulnerable: buffer overflow
    }
    printf("Input: %s\n", buf);
    return 0;
}
