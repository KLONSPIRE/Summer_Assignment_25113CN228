#include <iostream>
using namespace std;

int fact(int n){
    int f = 1;
    while(n > 1){
        f *= n;
        n--;
    }
    return f;
}

int main(){
    int n, temp, sum = 0;
    cout << "Enter a Number : ";
    cin >> n;
    temp = n;
    while(temp > 0){
        sum += fact(temp % 10);
        temp /= 10;
    }
    if(sum == n)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}