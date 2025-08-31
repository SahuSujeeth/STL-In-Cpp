#include <iostream>
#include <queue>
using namespace std;
void explainPriorityQueue()
{

    priority_queue<int> pq; // Max Heap
    pq.push(50);
    pq.push(10);
    pq.push(40);
    pq.push(30);

    cout << "Priority Queue (Max Heap): ";
    priority_queue<int> temp = pq; // copy
    while (!temp.empty())
    {
        cout << temp.top() << " "; // top = largest
        temp.pop();
    }
}
int main()
{
    explainPriorityQueue();
}
