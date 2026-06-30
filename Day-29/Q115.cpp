#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int choice;
    cout << "Enter a string: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "String is empty";
        return 0;
    }

    do
    {
        cout << "\n1. Display\n2. Length\n3. Reverse\n4. Uppercase\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
            cout << str << endl;
        else if(choice == 2)
            cout << "Length = " << str.length() << endl;
        else if(choice == 3)
        {
            for(int i = str.length() - 1; i >= 0; i--)
                cout << str[i];
            cout << endl;
        }
        else if(choice == 4)
        {
            for(int i = 0; i < str.length(); i++)
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            cout << str << endl;
        }
    } while(choice != 5);

    return 0;
}
