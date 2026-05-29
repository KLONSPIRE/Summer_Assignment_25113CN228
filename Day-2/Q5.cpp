#include <iostream>
using namespace std;

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
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Sum of Digits = " << sumDigits(n);
    return 0;
}