#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int temp;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;

    while(cin >> temp)
        arr.push_back(temp);

    if(arr.empty())
    {
        cout << "Array is empty";
        return 0;
    }

    for(int i = 0; i < arr.size(); i++)
        for(int j = i + 1; j < arr.size(); j++)
            if(arr.at(i) == arr.at(j)){
                arr.erase(arr.begin() + j);
                j--;
            }

    cout << "Array after removing duplicates:" << endl;
    for(int i : arr)
        cout << i << endl;

    return 0;
}