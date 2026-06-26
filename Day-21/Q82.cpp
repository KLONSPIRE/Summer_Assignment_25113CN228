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

    cout << "Reversed string: ";
    for(int i = str.length() - 1; i >= 0; i--)
        cout << str[i];

    return 0;
}
