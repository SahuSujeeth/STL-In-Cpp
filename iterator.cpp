#include <iostream>
#include <vector>
using namespace std;
void explainVector()
{
    vector<int> v = {10, 20, 30, 40};
    cout << "Elements using the iterator : ";
    // These are the three ways to print
    for (vector<int>::iterator sa = v.begin(); sa != v.end(); sa++)
    {
        cout << *sa << " ";
    }
    cout << endl;
    cout << v.back();
    
    // for (auto sa : v)
    // {
    //     cout << sa << " ";
    // }
    // cout << endl;
    // for (auto sa = v.begin(); sa != v.end(); sa++)
    // {
    //     cout << *sa << " ";
    // }
    // cout << endl;
}

int main()
{
    explainVector();

    return 0;
}