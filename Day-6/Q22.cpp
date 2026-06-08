#include <iostream>
using namespace std;

int main() {
    int bin, dec = 0, base = 1;
    cout << "Enter Binary Number: ";
    cin >> bin;
    while(bin > 0) {
        int digit = bin % 10;
        dec += digit * base;
        base *= 2;
        bin /= 10;
    }
    cout << "Decimal Number: " << dec;
    return 0;
}