#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    double balance = 0, amount;
    int choice;

    cout << "Enter account holder name: ";
    getline(cin, name);

    if(name.empty())
    {
        cout << "Name is empty";
        return 0;
    }

    do
    {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Account\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter amount: ";
            cin >> amount;
            if(amount > 0)
                balance += amount;
        }
        else if(choice == 2)
        {
            cout << "Enter amount: ";
            cin >> amount;
            if(amount > balance)
                cout << "Insufficient balance" << endl;
            else if(amount > 0)
                balance -= amount;
        }
        else if(choice == 3)
            cout << "Name: " << name << endl << "Balance: " << balance << endl;
    } while(choice != 4);

    return 0;
}
