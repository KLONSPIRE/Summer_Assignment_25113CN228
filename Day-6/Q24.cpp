#include <iostream>
using namespace std;

int main() {
    int x, n;
    long long result = 1;
    cout << "Enter x and n: ";
    cin >> x >> n;
    while (n > 0){
        result *= x;
        n -= 1;
    }
    cout << "Answer = " << result;
    return 0;
}