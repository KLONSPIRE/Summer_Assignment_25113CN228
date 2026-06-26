#include <iostream>
using namespace std;

int main()
{
    int score = 0, ans;
    cout << "Quiz Application" << endl;

    cout << "1. Which language is used here?\n1. C++\n2. Python\nEnter answer: ";
    cin >> ans;
    if(ans == 1)
        score++;

    cout << "2. How many bits are in one byte?\n1. 4\n2. 8\nEnter answer: ";
    cin >> ans;
    if(ans == 2)
        score++;

    cout << "3. Which symbol ends a C++ statement?\n1. ;\n2. :\nEnter answer: ";
    cin >> ans;
    if(ans == 1)
        score++;

    cout << "Score = " << score << "/3";
    return 0;
}
