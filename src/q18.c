// Write a C program that prompts the user for a positive integer and prints the
// multiplication table for that number up to 10 using a while loop.
#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (i <= 10)
    {
        printf("%d ", num * i);
        i++;
    }
    printf("\n");
    return 0;
}