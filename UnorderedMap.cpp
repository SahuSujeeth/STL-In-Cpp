/* unordered_map

Stores elements in key → value pairs (like map).

Unique keys only (no duplicates).

Not sorted → internally uses hash table, so order is unpredictable.

Average time complexity for insertion, search, delete = O(1).

Worst case = O(n) (if hash collisions), but very rare.*/

#include <iostream>
#include <unordered_map>
using namespace std;
void explainUnordered()
{

    unordered_map<int, string> um;

    // Insert
    um[1] = "Apple";
    um[2] = "Banana";
    um.insert({3, "Cherry"});
    um[4] = "Mango"; // inserts
    um.insert({5, "Orange"});

    // Iterate
    for (auto &p : um)
    {
        cout << p.first << " -> " << p.second << endl;
    }
    um[4] = "Mango"; // inserts
    um.insert({5, "Orange"});
    cout << um.count(2); // 1 if present, 0 if not
    cout << endl;
    um.erase(2);       // delete key 2
    cout << um.size(); // number of elements
}

int main()
{
    explainUnordered();
    return 0;
}
