#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, common = "";
    cout << "Enter first string: ";
    getline(cin, a);
    cout << "Enter second string: ";
    getline(cin, b);

    if(a.empty() || b.empty())
    {
        cout << "String is empty";
        return 0;
    }

    for(int i = 0; i < a.length(); i++)
    {
        bool already = false;
        for(int k = 0; k < common.length(); k++)
            if(a[i] == common[k])
                already = true;

        if(already)
            continue;

        for(int j = 0; j < b.length(); j++)
            if(a[i] == b[j])
            {
                common += a[i];
                break;
            }
    }

    if(common.empty())
        cout << "No common characters";
    else
        cout << "Common characters: " << common;

    return 0;
}
