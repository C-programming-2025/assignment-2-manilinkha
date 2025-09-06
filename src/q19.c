/* Write a C program that prompts the user for a positive integer and prints a pattern of asterisks (*) in a square shape using nested loops.
Example: User’s Input = 2, then pattern to print will be:
    * *
    * *
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    { // rows
        for (int j = 0; j < n; j++)
        { // columns
            printf("*");
            if (j != n - 1)
            { // add space except after last *
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}