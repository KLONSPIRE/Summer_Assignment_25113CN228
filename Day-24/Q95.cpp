#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, word = "", longest = "";
    cout << "Enter a sentence: ";
    getline(cin, str);

    if(str.empty())
    {
        cout << "Sentence is empty";
        return 0;
    }

    for(int i = 0; i <= str.length(); i++)
    {
        if(i < str.length() && str[i] != ' ')
            word += str[i];
        else
        {
            if(word.length() > longest.length())
                longest = word;
            word = "";
        }
    }

    cout << "Longest word = " << longest;
    return 0;
}
