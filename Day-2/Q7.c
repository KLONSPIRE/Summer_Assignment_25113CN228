#include <stdio.h>
#include <stdlib.h>

int prdDigits(long long n){
    int prd = 1;
    n = llabs(n);
    while(n > 0){
        prd *= n % 10;
        n /= 10;
    }
    return prd;
}

int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%lld", &n);
    printf("Product of Digits = %d", prdDigits(n));
    return 0;
}