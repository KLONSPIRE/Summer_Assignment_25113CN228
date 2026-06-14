#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int temp, countE = 0, countO = 0;
    vector<int> arr;

    cout << "Enter the Array(Enter a non integer value to stop): " << endl;
    while((cin >> temp)){
        arr.push_back(temp);
        if(temp % 2 == 0)
            countE++;
        else
            countO++;
    }
    
    cout << "Even Numbers = " << fixed << setprecision(2) << countE << endl;
    cout << "Odd Numbers = " << fixed << setprecision(2) << countO;
    
    return 0;
}