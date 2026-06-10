#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2*n - 1; j++)
            if((j > n - i) && (j <= n ) )    
                cout << (char)('A' + j-n+i-1);
            else if(j < n + i && j > n)
                cout << (char)('A' + n + i - j-1);
            else
                cout << " ";
        cout << endl;
    }
    return 0;
}