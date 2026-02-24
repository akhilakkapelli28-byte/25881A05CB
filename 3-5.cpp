#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, value;
    vector<int> v;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " integers:\n";
    for(int i = 0; i < n; ++i) {
        cin >> value;
        v.push_back(value);
    }

    // 1. sort the container
    sort(v.begin(), v.end());

    cout << "Sorted elements: ";
    for(int x : v)
        cout << x << " ";
    cout << endl;

    int findElem, countElem;
    cout << "Enter element to find: ";
    cin >> findElem;
    auto it = find(v.begin(), v.end(), findElem);
    if(it != v.end())
        cout << "Element " << findElem << " found in the container" << endl;
    else
        cout << "Element " << findElem << " not found" << endl;

    cout << "Enter element to count: ";
    cin >> countElem;
    int c = count(v.begin(), v.end(), countElem);
    cout << "Number of times " << countElem << " appears = " << c << endl;

    return 0;
}