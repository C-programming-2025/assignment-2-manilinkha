#include <stdio.h>
int main() {
    int number = 2;  
    int sum = 0;
    printf("Calculating sum of even numbers from 1 to 50...\n");
    while (number <= 50) {
        sum += number;  
        number += 2;    
    }
    printf("Sum of even numbers from 1 to 50 is: %d\n", sum);
    return 0;
}