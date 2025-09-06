// Write a C program that prompts the user for a number and prints its multiplication table up to 10 using a do-while loop.
#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    int r = 1;
    do {
        printf("%d ", p * r);
        r++;
    } while (r <= 10);
    return 0;
}