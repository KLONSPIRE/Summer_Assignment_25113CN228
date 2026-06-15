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
    
    for(i = 0; i < arr.size()/2; i++){
        temp = arr.at(i);
        arr.at(i) = arr.at(arr.size() - 1 - i);
        arr.at(arr.size() - 1 - i) = temp;
    }

    cout << "Reversed Array: " << endl;
    for(float j : arr)
        cout << fixed << setprecision(2)<< j << endl;
    
    return 0;
}