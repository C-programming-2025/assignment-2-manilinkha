#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    do
    {
        printf("%d * %d = %d", n, i, n * i);
        if (i < 10)  
            printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}
