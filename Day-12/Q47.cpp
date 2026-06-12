#include <iostream>
using namespace std;

void series(int n){
    int a = 0, b = 1, temp;
    for(int i = 1; i <= n; i++)
        if(i == 1)
            cout << a << endl;
        else if(i == 2)
            cout << b << endl;
        else {
            cout << a+b << endl;
            temp = a;
            a = b;
            b = temp + a;
        }
}

int main(){
    int n;
    cout << "Enter the No. of Terms: ";
    cin >> n;
    cout << "Fibonacci Series :" << endl;
    series(n);
    return 0;
}
