#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a Number: ";
    cin >> n;
    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}