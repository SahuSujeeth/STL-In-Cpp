#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> s = {1, 2, 3, 4, 5};
    s.pop_back(); // removes the 5 in the set.
    cout << "After pop_back: ";
    for (int x : s)
    {
        cout << x << " "; // 1,2,3,4
    }
    cout << endl;

    vector<int> a = {10, 20, 30, 40};
    a.erase(a.begin() + 1); // removes element at index 1 (20)
    cout << "After erase single: ";
    for (int x : a)
    {
        cout << x << " "; // 10 30 40
    }
    cout << endl;

    vector<int> h = {10, 20, 30, 40, 50};
    h.erase(h.begin() + 1, h.begin() + 4); // removes elements from index 1 to 3 → (20,30,40)
    cout << "After erase range: ";
    for (int x : h)
    {
        cout << x << " "; // 10 50
    }

    return 0;
}