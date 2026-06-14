#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int temp, key;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while((cin >> temp)){
        arr.push_back(temp);
    }
    
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter the value to search: ";
    cin >> key;

    for(int i = 0; i < arr.size(); i++)
        if(arr[i] == key){
            cout << "Key found at index " << i;
            return 0;
        }
    cout << "Key is not founded in the array.";
    
    return 0;
}