#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int len = 0;
    cout << "Enter a string: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "String is empty";
        return 0;
    }

    for(char ch : str)
        len++;

    cout << "Length = " << len;
    return 0;
}
