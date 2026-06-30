#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

void addStudent(vector<Student> &students)
{
    Student s;
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter marks: ";
    cin >> s.marks;
    students.push_back(s);
    cout << "Student added" << endl;
}

void displayStudents(vector<Student> students)
{
    if(students.empty())
    {
        cout << "No student records found" << endl;
        return;
    }

    for(int i = 0; i < students.size(); i++)
    {
        cout << "\nRoll Number: " << students[i].rollNo << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
    }
}

void searchStudent(vector<Student> students)
{
    int rollNo;
    cout << "Enter roll number to search: ";
    cin >> rollNo;

    for(int i = 0; i < students.size(); i++)
        if(students[i].rollNo == rollNo)
        {
            cout << "Name: " << students[i].name << endl;
            cout << "Marks: " << students[i].marks << endl;
            return;
        }

    cout << "Student not found" << endl;
}

int main()
{
    vector<Student> students;
    int choice;

    do
    {
        cout << "\n1. Add Student\n2. Display Students\n3. Search Student\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
            addStudent(students);
        else if(choice == 2)
            displayStudents(students);
        else if(choice == 3)
            searchStudent(students);
    } while(choice != 4);

    return 0;
}
