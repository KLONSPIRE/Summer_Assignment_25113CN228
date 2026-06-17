#include <iostream>
#include <vector>
using namespace std;

int main(){
    int temp;
    vector<int> arr1, arr2, inter;

    cout << "Enter Array 1 (Enter a non integer value to stop):" << endl;
    while(cin >> temp)
        arr1.push_back(temp);

    cin.clear();
    cin.ignore(1000, '\n');

    cout << "Enter Array 2 (Enter a non integer value to stop):" << endl;
    while(cin >> temp)
        arr2.push_back(temp);

    for(int i : arr1)
        for(int j : arr2)
            if(i == j)
            {
                inter.push_back(i);
                break;
            }

    cout << "Intersection Array:" << endl;

    for(int i : inter)
        cout << i << " ";

    return 0;
}