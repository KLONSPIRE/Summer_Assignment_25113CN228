#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char maxChar;
    int maxCount = 0;
    cout << "Enter a string: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "String is empty";
        return 0;
    }

    for(int i = 0; i < str.length(); i++)
    {
        int count = 0;
        for(int j = 0; j < str.length(); j++)
            if(str[i] == str[j])
                count++;

        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character = " << maxChar;
    return 0;
}
