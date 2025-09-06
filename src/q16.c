#include <stdio.h>
int main() {
    int num, i = 1;
    unsigned long long factorial = 1; 
    printf("Enter a Positive integer:");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    do {
        factorial *= i;
        i++;         
    } while (i <= num);
    printf("Factorial of %d is %llu\n", num, factorial);

    return 0;
}