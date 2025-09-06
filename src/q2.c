#include <stdio.h>

int main(){
    int age;
    printf("Enter a age:");
        scanf("%d",&age);
    if (age>= 18)
    {
        printf("Eligible to vote\n"); 
    }
    else if (age<18)
    {
        printf("Not eligible to vote\n"); 
    }

return 0;
}