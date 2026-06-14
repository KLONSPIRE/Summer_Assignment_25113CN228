#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int temp;
    float sum = 0;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while((cin >> temp)){
        arr.push_back(temp);
        sum += temp;
    }
    
    cout << "Sum = " << fixed << setprecision(2) << sum << endl;
    cout << "Average = " << fixed << setprecision(2) << sum/arr.size();
    
    return 0;
}