#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void explainUnorderedSet()
{
    unordered_set<int> us;
    us.insert(30);
    us.insert(10);
    us.insert(20);
    us.insert(10);
    for(int x:us) cout << x << " ";
}

int main()
{
 explainUnorderedSet();

    return 0;
}