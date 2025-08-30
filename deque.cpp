#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void explainDeque()
{
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    cout << "List : ";
    for(int i:dq) cout << i << " ";
    dq.pop_back();
    cout << endl;
    cout << "After pop back : ";
    for(int i:dq) cout << i << " ";
    cout << endl;
    cout << dq.front();
    cout << endl;
    cout << dq.back();

}
// Rest functions same as vector
// Begin ,end,rbegin,rend,clear,insert,size,swap...

int main()
{
    explainDeque();


    return 0;
}