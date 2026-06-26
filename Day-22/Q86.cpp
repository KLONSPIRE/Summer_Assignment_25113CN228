#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int words = 0;
    bool inWord = false;
    cout << "Enter a sentence: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "Sentence is empty";
        return 0;
    }

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ' && !inWord)
        {
            words++;
            inWord = true;
        }
        else if(str[i] == ' ')
            inWord = false;
    }

    cout << "Words = " << words;
    return 0;
}
