#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(2, 100);
    for (int i : v)
    {
        cout << i << " "; // 100,100
    }
    cout << endl;
    v.insert(v.begin(), 300);
    for (int i : v)
    {
        cout << i << " "; // 300 ,100 ,100
    }
    cout << endl;
    v.insert(v.begin() + 1, 2, 10);
    for (int i : v)
    {
        cout << i << " "; // 300,10,10,100,100
    }
    cout << endl;
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());
    for (int i : v)
    {
        cout << i << " "; // 50,50,300,10,10,100,100
    }
    cout << endl;
    cout << v.size();
    cout << endl;

    vector<int> v1 = {1, 2};
    vector<int> v2 = {3, 4};
    v1.swap(v2);
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    if (v.empty())
    {
        cout << "Vector is empty\n";
    }
    else
        cout << "Vector is not  empty\n";

    v.clear();
    // check again...
    if (v.empty())
    {
        cout << "Vector is empty\n";
    }
    else
        cout << "Vector is not  empty\n";


    return 0;
}