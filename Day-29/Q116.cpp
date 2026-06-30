#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Record
{
    string itemId;
    string itemName;
    string quantity;
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
            cout << "Enter itemId: ";
            getline(cin, item.itemId);
            cout << "Enter itemName: ";
            getline(cin, item.itemName);
            cout << "Enter quantity: ";
            getline(cin, item.quantity);
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
                 << "itemId: " << records[i].itemId << endl
                 << "itemName: " << records[i].itemName << endl
                 << "quantity: " << records[i].quantity << endl;
        }
    } while(choice != 3);

    return 0;
}
