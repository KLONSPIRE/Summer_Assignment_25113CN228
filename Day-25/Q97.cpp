#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int temp;
    vector<int> a, b, merged;
    cout << "Enter first sorted array (enter a non integer value to stop): " << endl;
    while(cin >> temp)
        a.push_back(temp);

    cin.clear();
    cin.ignore(1000, '\n');

    cout << "Enter second sorted array (enter a non integer value to stop): " << endl;
    while(cin >> temp)
        b.push_back(temp);

    if(a.empty() && b.empty())
    {
        cout << "Arrays are empty";
        return 0;
    }

    int i = 0, j = 0;
    while(i < a.size() && j < b.size())
    {
        if(a[i] < b[j])
            merged.push_back(a[i++]);
        else
            merged.push_back(b[j++]);
    }

    while(i < a.size())
        merged.push_back(a[i++]);

    while(j < b.size())
        merged.push_back(b[j++]);

    cout << "Merged sorted array:" << endl;
    for(int x : merged)
        cout << x << " ";

    return 0;
}
