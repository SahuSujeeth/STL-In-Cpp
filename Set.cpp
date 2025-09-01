#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void explianSet() // this set stores only unique elements only and no duplicates
// store elements in sorted order (by default ascendunng order)..
{
    set<int> st;
    st.insert(1);
    st.insert(5);
    st.insert(1);
    st.insert(3);
    st.insert(5); // duplicate, will be ignored
    for (int i : st)
        cout << i << " ";
    if (st.find(7) != st.end())
        cout << "7 found in set" << endl;
    else
        cout << "7 not found" << endl;

    // Erase an element
    st.erase(2);
    cout << "After erasing 2: ";
    for (int x : st)
        cout << x << " ";
    cout << endl;

    // Size
    cout << "Size of set: " << st.size() << endl;
}

int main()
{
    explianSet();

    return 0;
}