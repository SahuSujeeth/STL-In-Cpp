#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void explainList()
{
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(5);
    ls.push_front(4);
    ls.emplace_front(6);
    cout << "List : ";
    for(int i:ls) cout << i << " ";
}
// Rest functions same as vector
// Begin ,end,rbegin,rend,clear,insert,size,swap...

int main()
{
    explainList();


    return 0;
}