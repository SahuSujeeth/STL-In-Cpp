/*multimap is just like map, but:

Allows duplicate keys.

Still stores in sorted order by key.

You can’t use [] operator, only .insert().

find(key) → returns first occurrence.

To get all values of a duplicate key, you use equal_range(key).*/
#include <bits/stdc++.h>
using namespace std;
void explainMultiMap()
{

    multimap<int, string> mm;

    // Insert values
    mm.insert({1, "Apple"});
    mm.insert({2, "Banana"});
    mm.insert({1, "Mango"});
    mm.insert({3, "Grapes"});
    mm.insert({2, "Orange"});

    // Print elements
    for (auto &p : mm)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "---- Values for key 2 ----" << endl;

    auto range = mm.equal_range(2); // all pairs with key=2
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << " -> " << it->second << endl;
    }
}

int main()
{
    explainMultiMap();

    return 0;
}
/* Key points:

multimap = map + duplicates allowed.

No [], only .insert().

Use .equal_range(key) to get all values of a key.*/
