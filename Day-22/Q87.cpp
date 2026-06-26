#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char key;
    int count = 0;
    cout << "Enter a string: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "String is empty";
        return 0;
    }

    cout << "Enter character to count: ";
    cin >> key;

    for(int i = 0; i < str.length(); i++)
        if(str[i] == key)
            count++;

    cout << "Frequency = " << count;
    return 0;
}
