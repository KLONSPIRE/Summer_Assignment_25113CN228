#include <iostream>
#include <cmath>
using namespace std;

int prime(int n){
    int i;
    for(i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            break;
    if(i > sqrt(n))
        return n;
    return 0;
}

int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    if(prime(n) != 0)
        cout << "Given No. is a Prime Number.";
    else
        cout << "Given No. is not a Prime Number.";
    return 0;
}
