#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int temp;
    float min, max;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    cin >> temp;
    arr.push_back(temp);
    min = temp;
    max = temp;
    while((cin >> temp)){
        arr.push_back(temp);
        if(temp > max)
            max = temp;
        if(temp < min)
            min = temp;
    }
    
    cout << "Smallest Element = " << fixed << setprecision(2) << min << endl;
    cout << "Largest Element = " << fixed << setprecision(2) << max;
    
    return 0;
}