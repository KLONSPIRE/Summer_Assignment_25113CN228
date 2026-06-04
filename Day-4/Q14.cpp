#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float n, phi = (1 + sqrt(5))/2;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Term = " <<  (pow(phi, n) - pow((1-phi), n))/sqrt(5);
    return 0;
}