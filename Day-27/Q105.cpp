#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Record
{
    string rollNo;
    string name;
    string marks;
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
            cout << "Enter rollNo: ";
            getline(cin, item.rollNo);
            cout << "Enter name: ";
            getline(cin, item.name);
            cout << "Enter marks: ";
            getline(cin, item.marks);
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
                 << "rollNo: " << records[i].rollNo << endl
                 << "name: " << records[i].name << endl
                 << "marks: " << records[i].marks << endl;
        }
    } while(choice != 3);

    return 0;
}
