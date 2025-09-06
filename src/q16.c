// Write a C program that calculates the factorial of a given number using a do-while loop.
#include <stdio.h>

int main()
{
    int n, a = 1, f = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    do
    {
        f = a * f;
        a++;

    } while (a <= n);

    printf("%d", f);

    return 0;
}