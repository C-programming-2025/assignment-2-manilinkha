#include <stdio.h>
int main() {
    int sum = 0;
    int i = 2;
    while (i <= 50) {
        sum += i;
        i += 2;
    }
    printf("%d\n", sum); 
    return 0;
}