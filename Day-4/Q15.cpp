#include <iostream>
#include <cmath>
using namespace std;

int check(int n){
    int count = 0, sum = 0;
    int m = n;
    while(m > 0){
        count++;
        m /= 10;
    }
    m = n;
    while(m > 0){
        sum += pow(m % 10, count);
        m /= 10;
    }
    if(n == sum)
        return n;
    else
        return -1;
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    if(check(n) == n)
        cout << "Given No. is an Armstrong No.";
    else
        cout << "Given No. is not an Armstrong No.";
    return 0;
}