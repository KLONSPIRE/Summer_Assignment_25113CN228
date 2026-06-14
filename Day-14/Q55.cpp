#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int temp, max1, max2;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    cin >> temp;
    arr.push_back(temp);
    max1 = temp;
    max2 = temp;
    while((cin >> temp)){
        arr.push_back(temp);
        if(max1 < temp)
            max1 = temp;
        if(max2 > temp)
            max2 = temp; 
    }
    
    if(max1 != max2){
    for(int i : arr)
        if(max2 < i && i < max1)
            max2 = i;
    cout << "Second Largest Number = " << max2;
    }
    else
        cout << "There is no second largest number.";
    
    return 0;
}