#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int temp, target;
    vector<int> arr, ans;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while ((cin >> temp))
        arr.push_back(temp);

    if (arr.empty())
    {
        cout << "Array is empty";
        return 0;
    }

    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter the target sum: ";
    cin >> target;

    for (int i = 0; i < arr.size(); i++)
        for (int j = i + 1; j < arr.size(); j++)
            if (arr.at(j) == target - arr.at(i)){
                ans.push_back(arr.at(i));
                ans.push_back(arr.at(j));
                break;
            }

    if(ans.empty())
        cout << "No pair found.";
    else{
        cout << "Pairs: " << endl;
        for(int i = 0; i < ans.size(); i++)
            cout << ans.at(i) << "  " << ans.at(i+1) << endl;
    }

    return 0;
}