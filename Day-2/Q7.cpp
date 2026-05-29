#include <iostream>
using namespace std;

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
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Product of Digits = " << prdDigits(n);
    return 0;
}