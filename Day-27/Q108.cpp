#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float m1, m2, m3, total, percent;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;

    if(name.empty())
    {
        cout << "Name is empty";
        return 0;
    }

    total = m1 + m2 + m3;
    percent = total / 3;

    cout << "\nMarksheet" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Total = " << total << endl;
    cout << "Percentage = " << percent << endl;

    if(percent >= 33)
        cout << "Result: Pass";
    else
        cout << "Result: Fail";

    return 0;
}
