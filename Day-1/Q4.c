#include <stdio.h>
#include <stdlib.h>

int count(long long n){
    int c = 0;
    if(n == 0)
        return 1;
    n = llabs(n);
    while(n > 0){
        c++;
        n /= 10;
    }
    return c;
}

int main(){
    long long n;
    printf("Enter a Number : ");
    scanf("%lld", &n);
    printf("No. of Digits = %d", count(n));
    return 0;
}