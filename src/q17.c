#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter a positive number.\n");
        return 1;
    }
    printf("Countdown:\n");
    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}