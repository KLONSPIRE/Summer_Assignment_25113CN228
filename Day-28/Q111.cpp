#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Record
{
    string passengerName;
    string source;
    string destination;
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
            cout << "Enter passengerName: ";
            getline(cin, item.passengerName);
            cout << "Enter source: ";
            getline(cin, item.source);
            cout << "Enter destination: ";
            getline(cin, item.destination);
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
                 << "passengerName: " << records[i].passengerName << endl
                 << "source: " << records[i].source << endl
                 << "destination: " << records[i].destination << endl;
        }
    } while(choice != 3);

    return 0;
}
