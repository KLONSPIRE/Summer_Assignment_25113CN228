#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int i;
    float temp;
    vector<float> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while((cin >> temp))
        arr.push_back(temp);
    
    cout << "Array: " << endl;
    for(i = 0; i < arr.size(); i++)
        cout << fixed << setprecision(2)<< arr[i] << endl;
    
    return 0;
}