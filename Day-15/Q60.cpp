#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    float temp;
    vector<float> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while ((cin >> temp))
        arr.push_back(temp);

    if (arr.empty())
    {
        cout << "Array is empty";
        return 0;
    }

    int n = arr.size();
    for (int i = 0; i < n; i++)
        if(arr.at(i) == 0){
            arr.push_back(0);
            arr.erase(arr.begin() + i);
            n--;
            i--;
        }

    cout << "Array: " << endl;
    for (float i : arr)
        cout << fixed << setprecision(2) << i << endl;
    return 0;
}