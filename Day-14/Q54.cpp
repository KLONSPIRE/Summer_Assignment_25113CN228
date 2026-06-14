#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int temp, key, count = 0;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while((cin >> temp)){
        arr.push_back(temp);
    }
    
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter the element: ";
    cin >> key;

    for(int i : arr)
        if(i == key)
            count++;
    cout << "Frequency = " << count;
    
    return 0;
}