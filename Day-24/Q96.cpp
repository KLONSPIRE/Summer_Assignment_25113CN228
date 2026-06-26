#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "String is empty";
        return 0;
    }

    for(int i = 0; i < str.length(); i++)
    {
        bool found = false;
        for(int j = 0; j < result.length(); j++)
            if(str[i] == result[j])
                found = true;

        if(!found)
            result += str[i];
    }

    cout << "String after removing duplicate characters: " << result;
    return 0;
}
