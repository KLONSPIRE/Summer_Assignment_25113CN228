#include <iostream>
using namespace std;

long sumN(long n){
    return n * (n + 1) / 2;
}

int main(){
    long n;
    cout << "Enter an Integer : ";
    cin >> n;
    if(n < 1){
        cout << "Given INput is not a Natural no.";
        return 0;
    }
    cout << "Sum = " << sumN(n);
    return 0;
}