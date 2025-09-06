/* Write a C program that prompts the user for a positive integer and prints a pattern of asterisks (*) in a square shape using nested loops.
Example: User’s Input = 2, then pattern to print will be:
    * *
    * *
*/
#include <stdio.h>

int main() {
    int pint;
    scanf("%d", &pint);
    int x, y;

    for (int x = 0; x < pint; x++) {
        for (int y = 0; y < pint; y++) {
            printf("*");
            if (y < pint - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}