#include <iostream>
#include <vector>
using namespace std;

int main(){
    int temp;
    vector<int> arr1, arr2, merged;

    cout << "Enter Array 1 (Enter a non integer value to stop):" << endl;
    while(cin >> temp)
        arr1.push_back(temp);

    cin.clear();
    cin.ignore(1000, '\n');

    cout << "Enter Array 2 (Enter a non integer value to stop):" << endl;
    while(cin >> temp)
        arr2.push_back(temp);

    for(int i : arr1)
        merged.push_back(i);

    for(int i : arr2)
        merged.push_back(i);

    cout << "Merged Array:" << endl;

    for(int i : merged)
        cout << i << " ";

    return 0;
}