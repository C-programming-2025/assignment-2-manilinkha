// Write a C program that prompts the user for a positive integer and prints all the factors of that number using a for loop.
#include <stdio.h>

int main() {
    int p;
    int r = 1;
    scanf("%d", &p);
    for (int r = 1; r <= p; r++) {
        if (p % r == 0) {
            printf("%d ", r);
        }
    }
    return 0;
}