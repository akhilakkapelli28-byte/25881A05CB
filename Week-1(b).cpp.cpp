#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNumber;
    string name;
    float marks;

    // Constructor
    Student() {
        rollNumber = 0;
        name = "";
        marks = 0.0f;
        cout << "Student object created." << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student object deleted." << endl;
    }
};

int main() {
    Student s;
    cout << "Enter roll number: ";
    cin >> s.rollNumber;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:\n";
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
