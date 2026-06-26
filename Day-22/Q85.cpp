#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    bool palindrome = true;
    cout << "Enter a string: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "String is empty";
        return 0;
    }

    for(int i = 0; i < str.length() / 2; i++)
        if(str[i] != str[str.length() - 1 - i])
            palindrome = false;

    if(palindrome)
        cout << "String is palindrome";
    else
        cout << "String is not palindrome";

    return 0;
}
