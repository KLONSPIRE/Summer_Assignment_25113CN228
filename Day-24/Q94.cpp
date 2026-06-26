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

    cout << "Compressed string: ";
    for(int i = 0; i < str.length(); i++)
    {
        int count = 1;
        while(i + 1 < str.length() && str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        cout << str[i] << count;
    }

    return 0;
}
