#include <stdio.h>
int main() {
    int num, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    printf("Multiplication table for %d:\n", num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}