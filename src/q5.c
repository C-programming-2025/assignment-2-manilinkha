#include <stdio.h>
int main() {
    int num;
    unsigned long long factorial = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    if (num == 0) {
        printf("The factorial of 0 is 1\n");
        return 0;
    }
    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %llu\n", num, factorial);
    return 0;
}