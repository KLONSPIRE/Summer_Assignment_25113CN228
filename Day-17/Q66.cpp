#include <iostream>
#include <vector>
using namespace std;

int main(){
    int temp;
    vector<int> arr1, arr2, uni;

    cout << "Enter Array 1 (Enter a non integer value to stop):" << endl;
    while(cin >> temp)
        arr1.push_back(temp);

    cin.clear();
    cin.ignore(1000, '\n');

    cout << "Enter Array 2 (Enter a non integer value to stop):" << endl;
    while(cin >> temp)
        arr2.push_back(temp);

    for(int i : arr1)
        uni.push_back(i);

    for(int i : arr2){
        bool found = false;

        for(int y : uni)
            if(i == y){
                found = true;
                break;
            }

        if(!found)
            uni.push_back(i);
    }

    cout << "Union Array:" << endl;

    for(int i : uni)
        cout << i << " ";

    return 0;
}