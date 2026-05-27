#include <stdio.h>

long sumN(long n){
    return n * (n + 1) / 2;
}

int main(){
    long n;
    printf("Enter an Integer : ");
    scanf("%ld", &n);
    if(n < 1){
        printf("Given input is not a Natural no.");
        return 0;
    }
    printf("Sum = %ld", sumN(n));
    return 0;
}