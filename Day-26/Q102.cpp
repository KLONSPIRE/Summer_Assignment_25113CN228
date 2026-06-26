#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;

    if(name.empty())
    {
        cout << "Name is empty";
        return 0;
    }

    if(age >= 18)
        cout << name << " is eligible to vote";
    else
        cout << name << " is not eligible to vote";

    return 0;
}
