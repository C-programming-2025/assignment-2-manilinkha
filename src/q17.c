#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    printf("Countdown:\n");
    for (int i = num; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}