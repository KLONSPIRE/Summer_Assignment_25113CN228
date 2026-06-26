#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 10000, amount;

    do
    {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
            cout << "Balance = " << balance << endl;
        else if(choice == 2)
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if(amount > 0)
                balance += amount;
            else
                cout << "Invalid amount" << endl;
        }
        else if(choice == 3)
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if(amount <= 0)
                cout << "Invalid amount" << endl;
            else if(amount > balance)
                cout << "Insufficient balance" << endl;
            else
                balance -= amount;
        }
    } while(choice != 4);

    return 0;
}
