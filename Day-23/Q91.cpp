#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cout << "Enter first string: ";
    getline(cin, a);
    cout << "Enter second string: ";
    getline(cin, b);

    if(a.empty() || b.empty())
    {
        cout << "String is empty";
        return 0;
    }

    if(a.length() != b.length())
    {
        cout << "Strings are not anagrams";
        return 0;
    }

    for(int i = 0; i < a.length(); i++)
    {
        bool found = false;
        for(int j = 0; j < b.length(); j++)
            if(a[i] == b[j])
            {
                b[j] = '*';
                found = true;
                break;
            }
        if(!found)
        {
            cout << "Strings are not anagrams";
            return 0;
        }
    }

    cout << "Strings are anagrams";
    return 0;
}
