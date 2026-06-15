#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int shift;
    float temp;
    vector<float> arr, arr2;

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
    cout << "Enter the no. of times to shift right side: ";
    cin >> shift;

    shift %= arr.size();

    for (int i = 0; i < arr.size(); i++)
        arr2.push_back(arr.at((arr.size() + i - shift) % arr.size()));

    cout << "Rotated array: " << endl;
    for (float i : arr2)
        cout << fixed << setprecision(2) << i << endl;
    return 0;
}