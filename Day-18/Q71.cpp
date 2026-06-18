#include <iostream>
#include <vector>
using namespace std;

int main(){
    int temp,key;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while(cin >> temp) 
        arr.push_back(temp);

    if (arr.empty())
    {
        cout << "Array is empty";
        return 0;
    }
    
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter the target value: ";
    cin >> key;

    int low=0, high=arr.size()-1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid]==key){
            cout << "Element found at index " << mid;
            return 0;
        }
        else if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }

    cout << "Element not found";

    return 0;
}