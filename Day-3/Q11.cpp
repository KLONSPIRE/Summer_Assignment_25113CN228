#include <iostream>
using namespace std;

int main(){
    int a, b, gcd, min;
    cout << "Enter the Numbers : ";
    cin >> a;
    cin >> b;
    if(a > b)
        min = b;
    else
        min = a;
    for(int i = min; i >= 1; i--)
        if(a % i == 0 && b % i == 0){
            cout << "GCD = " << i;
            break;
        }

        return 0;
}