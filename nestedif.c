#include <stdio.h>

int main() {
    int num;

   
    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num >= 0) {
       
        if (num > 100) {
            printf("The number %d is positive and greater than 100.\n", num);
        } else {
            printf("The number %d is positive but not greater than 100.\n", num);
        }
    } else {
        printf("The number %d is negative.\n", num);
    }

    return 0;
}