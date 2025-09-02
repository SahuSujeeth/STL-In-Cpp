#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
void explainExtra()
{
    vector<int> s = {1, 3, 9, 2};
    sort(s.begin(), s.end());
    // sort(s,s+4) // this iis the only for the array only not for the vectors ok.. becoz doesn't ahve iterators
    cout << "Ascending order" << endl;
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(s.begin(), s.end(), greater<int>());
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;
}
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first; // tie-breaker
    return a.second < b.second;   // sort by second element
}

int main()
{
    explainExtra();
    vector<pair<int, int>> vp = {{1, 2}, {3, 1}, {2, 2}, {5, 1}};

    sort(vp.begin(), vp.end(), cmp);

    cout << "Sorted Pairs:\n";
    for (auto p : vp)
        cout << "(" << p.first << "," << p.second << ") " << endl;
    int x = 13; // binary = 1101
    cout << __builtin_popcount(x) << endl;
    long long y = 12345678912345;
    cout << __builtin_popcountll(y) << endl;
    vector<int> v = {1, 2, 3};

    do
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}