#include <stdio.h>
#include <stdlib.h>

int Reverse(long long n){
    long long rev = 0;
    n = llabs(n);
    while(n > 0){
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    return rev;
}

int main(){
    long long n;
    printf("Enter a Number : ");
    scanf("%lld", &n);
    printf("Reverse Number = ", Reverse(n));
    return 0;
}