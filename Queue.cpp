#include <iostream>
#include <queue>
using namespace std;
void explainQueue()
{

    queue<int> q;

    // push -> insert at back
    q.push(10);
    q.push(20);
    q.push(30);
    q.back() += 5;

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 35

    q.pop(); // removes front (10)

    cout << "After pop, Front: " << q.front() << endl; // 20

    if (q.empty())
        cout << "Queue is empty";
    else
        cout << "Queue size: " << q.size() << endl; // 2
    queue<int> temp = q;

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    // size swap empty same as the stack....
}
int main()
{
    explainQueue();
}
