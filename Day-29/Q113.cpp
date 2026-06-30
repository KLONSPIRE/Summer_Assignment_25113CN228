#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;

    do
    {
        cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        if(choice == 1)
            cout << "Result = " << a + b << endl;
        else if(choice == 2)
            cout << "Result = " << a - b << endl;
        else if(choice == 3)
            cout << "Result = " << a * b << endl;
        else if(choice == 4)
        {
            if(b == 0)
                cout << "Cannot divide by zero" << endl;
            else
                cout << "Result = " << a / b << endl;
        }
    } while(choice != 5);

    return 0;
}
