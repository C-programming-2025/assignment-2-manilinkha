// Write a C program that prompts the user for a positive integer and prints the
// multiplication table for that number up to 10 using a while loop.
#include <stdio.h>

int main() {
    int pint;
    scanf("%d", &pint);

    int r = 1;
    while (r <= 10) {
        printf("%d ", pint * r);
        r++;
    }

    return 0;
}