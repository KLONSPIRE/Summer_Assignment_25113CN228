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
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

    cout << "Uppercase string: " << str;
    return 0;
}
