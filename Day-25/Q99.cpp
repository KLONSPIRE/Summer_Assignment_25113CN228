#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();

    if(n <= 0)
    {
        cout << "No names entered";
        return 0;
    }

    vector<string> names(n);
    cout << "Enter names:" << endl;
    for(int i = 0; i < n; i++)
        getline(cin, names[i]);

    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(names[i] > names[j])
            {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }

    cout << "Names in alphabetical order:" << endl;
    for(string name : names)
        cout << name << endl;

    return 0;
}
