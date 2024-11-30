#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory
    *ptr = 42;                             // Assign a value
    printf("Value: %d\n", *ptr);           // Use the value
    free(ptr);                             // Free the memory
    printf("Parinitha");
    return 0;
}