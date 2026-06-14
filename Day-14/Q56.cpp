#include <iostream>
#include <vector>
using namespace std;

int main() {
    int temp;
    vector<int> arr;

    cout << "Enter the array (enter a non-integer to stop):\n";

    while (cin >> temp)
        arr.push_back(temp);

    cout << "Duplicate elements: ";

    bool found = false;

    for (int i = 0; i < arr.size(); i++) {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << "None";

    return 0;
}