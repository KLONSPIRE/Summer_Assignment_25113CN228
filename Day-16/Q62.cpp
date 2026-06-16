#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int maxF = 0, crntF;
    float temp, maxE;
    vector<float> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while ((cin >> temp))
        arr.push_back(temp);

    if (arr.empty())
    {
        cout << "Array is empty";
        return 0;
    }

    for(int i = 0; i < arr.size(); i++){
        
        crntF = 0;
        
        for(int j = i + 1; j < arr.size(); j++)
            if(arr.at(i) == arr.at(j))
                crntF++;
        
        if(crntF >= maxF){
            maxF = crntF;
            maxE = arr.at(i);
        }
    }

    cout << "Maximum frequency element: " << maxE;

    return 0;
}