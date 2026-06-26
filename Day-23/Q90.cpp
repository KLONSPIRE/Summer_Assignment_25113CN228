#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "String is empty";
        return 0;
    }

    for(int i = 0; i < str.length(); i++)
        for(int j = i + 1; j < str.length(); j++)
            if(str[i] == str[j])
            {
                cout << "First repeating character = " << str[i];
                return 0;
            }

    cout << "No repeating character found";
    return 0;
}
