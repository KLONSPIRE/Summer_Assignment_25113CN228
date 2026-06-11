#include <iostream>
using namespace std;

double sum(double x, double y){
    return (x + y);
}

int main(){
    double a, b;
    cout << "Enter the Numbers: ";
    cin >> a >> b;
    cout << "Sum = " << sum(a, b);
    return 0;
}