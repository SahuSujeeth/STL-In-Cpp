/*What is map?

map is an associative container in C++.

It stores elements as key–value pairs.

Each key is unique, and values are mapped to keys.

By default, it stores in sorted order of keys (ascending) using Red-Black Tree (balanced BST) internally.*/
#include <iostream>
#include <map>
using namespace std;
void explainMap()
{

    map<int, string> m;

    // inserting values
    m[1] = "Apple"; // way1
    m[2] = "Banana";
    m[5] = "Mango";
    m[3] = "orange";
    m.insert({4, "Grapes"}); // way 2 of insertion..

    // printing
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << m[1]; // prints "Apple"
    if (m.find(2) != m.end())
        cout << "Found!";
    m.erase(2); // removes key 2
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // Check key
    if (m.find(3) != m.end())
        cout << "Key 3 found: " << m[3] << endl;

    // Erase a key
    m.erase(1);

    cout << "After erasing key 1:" << endl;
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << "Before: " << m.size() << endl;

    cout << m[15] << endl; // prints empty string

    cout << "After: " << m.size() << endl;
}

int main()
{
    explainMap();
}
