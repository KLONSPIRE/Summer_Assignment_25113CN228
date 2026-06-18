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
        for(int j=i+1;j<arr.size();j++)
            if(arr[i] < arr[j])
                swap(arr[i], arr[j]);

    cout << "Soreted array in descending order: " << endl;
    for(int x:arr) 
        cout << x << " ";

    return 0;
}