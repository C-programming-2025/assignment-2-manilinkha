#include <stdio.h>

int main() {
    int num, i = 2, isPrime = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    
    if (num == 2) {
        printf("%d is a prime number.\n", num);
        return 0;
    }
    
    if (num % 2 == 0) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    
   
    i = 3;
    while (i * i <= num) { 
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
        i += 2;  
    }
    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}