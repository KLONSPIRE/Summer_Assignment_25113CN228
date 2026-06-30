#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Record
{
    string bookId;
    string bookName;
    string status;
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
            cout << "Enter bookId: ";
            getline(cin, item.bookId);
            cout << "Enter bookName: ";
            getline(cin, item.bookName);
            cout << "Enter status: ";
            getline(cin, item.status);
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
                 << "bookId: " << records[i].bookId << endl
                 << "bookName: " << records[i].bookName << endl
                 << "status: " << records[i].status << endl;
        }
    } while(choice != 3);

    return 0;
}
