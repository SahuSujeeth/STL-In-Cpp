#include <bits/stdc++.h>
using namespace std;
void explainMultiSet()
{

    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(5);

    cout << "Elements: ";
    for (int x : ms)
        cout << x << " ";
    cout << endl;

    cout << "Count of 10 = " << ms.count(10) << endl;

    ms.erase(ms.find(10)); // only 1 occurrence erased
   // ms.erase(10); //removes all the occurance 
    cout << "After erase: ";
    for (int x : ms)
        cout << x << " ";
}

int main()
{
    explainMultiSet();
}
