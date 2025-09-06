// Write a C program that prompts the user for a positive integer and calculates the factorial of that number using a while loop.
#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        printf("%d ", num * i);
        i++;
    } while (i <= 10);
    printf("\n");
    return 0;
}