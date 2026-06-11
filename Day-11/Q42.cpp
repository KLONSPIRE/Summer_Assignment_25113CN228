#include <iostream>
using namespace std;

double max(double* a, int n){
    double m = a[0];
    while(n > 0)
        if(m < a[n--])
            m = a[n+1];
    return m;
}

int main(){
    int n;
    cout << "Enter total no. of values: ";
    cin >> n;
    cout << "Enter the numbers: " << endl;
    double a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Maximum  = " << max(a, n);
    return 0;
}