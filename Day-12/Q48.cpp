#include <iostream>
using namespace std;

void check(int n){
    int sum = 0;
    for(int i = 1; i < n; i++)
        if(n % i == 0)
            sum += i;
    if(sum == n)
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";
}

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    check(n);
    return 0;
}