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
    int min, max;
    cout << "Enter the starting number: ";
    cin >> min;
    cout << "Enter the ending number: ";
    cin >> max;
    cout << "Armstrong Numbers in the given range : " << endl;
    while(min <= max){
    if(check(min) == min)
        cout << min << endl;
    min++;
    }
    return 0;
}