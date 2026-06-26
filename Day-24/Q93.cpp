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
        cout << "Second string is not rotation of first string";
        return 0;
    }

    string combined = a + a;
    for(int i = 0; i <= combined.length() - b.length(); i++)
    {
        int j;
        for(j = 0; j < b.length(); j++)
            if(combined[i + j] != b[j])
                break;

        if(j == b.length())
        {
            cout << "Second string is rotation of first string";
            return 0;
        }
    }

    cout << "Second string is not rotation of first string";
    return 0;
}
