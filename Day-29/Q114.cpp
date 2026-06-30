#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int choice, value;

    do
    {
        cout << "\n1. Insert\n2. Display\n3. Search\n4. Delete\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter value: ";
            cin >> value;
            arr.push_back(value);
        }
        else if(choice == 2)
        {
            if(arr.empty())
                cout << "Array is empty" << endl;
            else
                for(int x : arr)
                    cout << x << " ";
            cout << endl;
        }
        else if(choice == 3)
        {
            cout << "Enter value to search: ";
            cin >> value;
            bool found = false;
            for(int x : arr)
                if(x == value)
                    found = true;
            if(found)
                cout << "Value found" << endl;
            else
                cout << "Value not found" << endl;
        }
        else if(choice == 4)
        {
            cout << "Enter value to delete: ";
            cin >> value;
            for(int i = 0; i < arr.size(); i++)
                if(arr[i] == value)
                {
                    arr.erase(arr.begin() + i);
                    break;
                }
        }
    } while(choice != 5);

    return 0;
}
