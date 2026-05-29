#include <iostream>
using namespace std;

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
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Reverse Number = " << Reverse(n);
    return 0;
}