#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    // Program to use a set to store unique integers and print them in sorted order
    set<int> uniqueNumbers;
    int n, value;

    cout << "Enter the number of integers: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        uniqueNumbers.insert(value);
    }

    cout << "Unique integers in sorted order:\n";
    for (int num : uniqueNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
    
}