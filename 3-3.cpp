#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int , string> students;

    students[101] = "PRADEEP";
    students[102] = "AKSHAY";
    students[103] = "AKHIL";

    cout<< "Student Details:\n";
    for(map<int , string>::iterator it = students.begin(); it != students.end(); it++)
    {
        cout<<"ID: "<<it -> first<<" "<< "Name: "<< it -> second <<endl;
    }
}