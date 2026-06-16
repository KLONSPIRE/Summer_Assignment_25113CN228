#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int actual_sum = 0, temp;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while ((cin >> temp))
    {
        arr.push_back(temp);
        actual_sum += temp;
    }

    if (arr.empty())
    {
        cout << "Array is empty";
        return 0;
    }

    int n = arr.size() + 1;

    cout << "Missing number = " << (n * (1 + n) / 2) - actual_sum;

    return 0;
}