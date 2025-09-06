#include <stdio.h>
int main() {
    int size; 
    printf("Enter a positive integer: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    printf("Square pattern:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}