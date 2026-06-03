#include <iostream>
#include <cmath>
using namespace std;

int prime(int n){
    int i;
    for(i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            break;
    if(i > sqrt(n))
        return n;
    return 0;
}

int main(){
    int min, max;
    cout << "Enter Starting Number : ";
    cin >> min;
    cout << "Enter Ending Number : ";
    cin >> max;
    cout << "Prime Numbers : " << endl;
    for(int i = min; i <= max; i++)
        if(prime(i) != 0)
            cout << i << endl;
    return 0;
}