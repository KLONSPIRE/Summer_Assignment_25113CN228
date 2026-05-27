#include <iostream>
using namespace std;

int count(long long n){
    int c = 0;
    if(n == 0)
        return 1;
    n = abs(n);
    while(n > 0){
        c++;
        n /= 10;
    }
    return c;
}

int main(){
    long long n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "No. of Digits = " << count(n);
    return 0;
}