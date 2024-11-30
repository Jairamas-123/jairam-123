#include <stdio.h>
int main() {
    char str[] = "Hello";
    char *ptr = str;
    while (*ptr) {
        printf("%c ", *ptr);
        ptr++;
    }
    printf("Parinitha");
    return 0;
}