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
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();
    Student* students = new Student[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for student " << (i + 1) << ":\n";
        cout << "Enter roll number: ";
        cin >> students[i].rollNumber;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, students[i].name);
        cout << "Enter marks: ";
        cin >> students[i].marks;
        cin.ignore();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << (i + 1) << ":\n";
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
    }

    delete[] students;
    return 0;
}
