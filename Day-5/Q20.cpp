#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n < 2)
        return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for(int i = n; i >= 2; i--)
        if(n % i == 0 && Prime(i)) {
            cout << "Largest Prime Factor = " << i;
            break;
        }
    return 0;
}