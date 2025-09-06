#include <stdio.h>
int main() {
    int num, ab_value;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num > 0) {
        ab_value = num;
    } else if (num < 0) {
        ab_value = -num;
    } else {
        ab_value = 0; 
    }
    printf("The absolute value is: %d", ab_value);
    return 0;
}
