// Write a C program that prompts the user for a positive integer and prints a countdown from that number to 1 using a for loop.
#include <stdio.h>

int main() {
    int pint;
    scanf("%d", &pint);

    for (int r = pint; r >= 1; r--) {
        printf("%d ", r);
    }
    return 0;
}