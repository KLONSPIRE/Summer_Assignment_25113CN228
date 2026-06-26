#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "No words entered";
        return 0;
    }

    vector<string> words(n);
    cout << "Enter words:" << endl;
    for(int i = 0; i < n; i++)
        cin >> words[i];

    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(words[i].length() > words[j].length())
            {
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }

    cout << "Words sorted by length:" << endl;
    for(string word : words)
        cout << word << endl;

    return 0;
}
