#include <stdio.h>
#include <stdlib.h>

int sumDigits(long long n){
    int sum = 0;
    n = llabs(n);
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%lld", &n);
    printf("Sum of Digits = %d", sumDigits(n));
    return 0;
}