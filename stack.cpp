// LIFO :- Last in first out....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    // for(int i:st) cout << i << " ";
    cout << st.top(); // It will prints the top of the element...
    cout << endl;
    st.pop(); // it will delete the top of the element...
    cout << st.top();
    cout << endl;
    cout << st.size();
    cout << endl;
    if (st.empty())
    {
        cout << "list is empty";
    }
    else
        cout << "Not empty";
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    stack<int> s2;
    s2.push(10);
    s2.push(20);
    s1.swap(s2);
    cout << "\nAfter swap:" << endl;
    cout << "s1: ";
    explainStack();
    cout << "s2: ";
    explainStack();
}

int main()
{
    explainStack();

    return 0;
}