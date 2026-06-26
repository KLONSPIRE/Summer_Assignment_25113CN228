#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100" << endl;
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess > number)
            cout << "Too high" << endl;
        else if(guess < number)
            cout << "Too low" << endl;
        else
            cout << "Correct guess in " << attempts << " attempts";
    } while(guess != number);

    return 0;
}
