#include <bits/stdc++.h>
using namespace std;
void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << "Vector v: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(2, 5);
    for (auto s : vec)
    {
        cout << s.first << " " << s.second;
        cout << endl;
    }
    vector<int> vect(5, 100);
    // Here 5 is the size and 100 is the element like this [100,100,100,100,100].
    // vector<int> v(5);
    cout << "vect: ";
    for (int x : vect)
    {
        cout << x << " ";
    }
    cout << endl;

    // v.push_back(1);
    vector<int> v1(5, 20);
    cout << "v1:";
    for (int s : v1)
    {
        cout << s << " ";
    }
    cout << endl;
    vector<int> v2(v1);
    cout << "v2 (copy of v1): ";
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{

    explainVector();
    return 0;
}