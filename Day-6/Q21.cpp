#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;
    string bin = "";
    while(n > 0) {
        bin = char(n % 2 + '0') + bin;
        n /= 2;
    }
    cout << "Binary Number: " << bin;
    return 0;
}
