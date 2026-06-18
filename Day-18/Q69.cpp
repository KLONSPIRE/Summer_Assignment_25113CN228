#include <iostream>
#include <vector>
using namespace std;

int main(){
    int temp;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while(cin >> temp) 
        arr.push_back(temp);

    if (arr.empty())
    {
        cout << "Array is empty";
        return 0;
    }

    for(int i=0;i<arr.size()-1;i++)
        for(int j=0;j<arr.size()-1-i;j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);

    cout << "Sorted Array: " << endl;
    for(int i:arr) 
        cout << i << " ";

    return 0;
}