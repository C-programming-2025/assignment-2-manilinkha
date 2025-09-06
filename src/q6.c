#include <stdio.h>
int main()
{
    int tab, n, i;
    printf("Enter a number: ");   
    scanf("%d", &n);
    i = 1;
    do
    {
        tab = n * i;
        printf("%d * %d = %d\n", n, i, tab);
        i++;
    } while (i <= 10);
    return 0;
}
