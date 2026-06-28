#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Record
{
    string name;
    string phone;
    string email;
};

int main()
{
    vector<Record> records;
    int choice;

    do
    {
        cout << "\n1. Add Record\n2. Display Records\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1)
        {
            Record item;
            cout << "Enter name: ";
            getline(cin, item.name);
            cout << "Enter phone: ";
            getline(cin, item.phone);
            cout << "Enter email: ";
            getline(cin, item.email);
            records.push_back(item);
            cout << "Record added" << endl;
        }
        else if(choice == 2)
        {
            if(records.empty())
                cout << "No records found" << endl;
            else
                for(int i = 0; i < records.size(); i++)
                    cout << "\nRecord " << i + 1 << endl
                 << "name: " << records[i].name << endl
                 << "phone: " << records[i].phone << endl
                 << "email: " << records[i].email << endl;
        }
    } while(choice != 3);

    return 0;
}
