#include <iostream>
#include <vector>
using namespace std;

void fact20(int n){
    long long f = 1;
    while(n > 1){
        f = f * n;
        n--;
    }
    cout << "Factorial = " << f;
}

void fact21(int n){
    vector<int> f = {1};
    int i, x, y = 0;
    while(n > 1){
        for(i = 0; i < f.size(); i++){
            x = n * f[i] + y;
            y = x / 10;
            if(x > 9)
                x %= 10;
            f[i] = x;
            if(i == f.size() - 1 && y != 0){
                while(y > 0){
                    f.push_back(y % 10);
                    y /= 10;
                }
                break;
            }
        }
        n--;
    }
    cout << "Factorial = ";
    for(i = f.size() - 1; i >= 0; i--)
        cout << f[i];
}

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    if(n <= 20)
        fact20(n);
    else
        fact21(n);
    return 0;
}