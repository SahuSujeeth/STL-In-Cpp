#include <iostream>
#include <queue>
using namespace std;
void explainPriorityQueue()
{

    priority_queue<int, vector<int>, greater<int>> minPQ; // Min Heap
    minPQ.push(50);
    minPQ.push(10);
    minPQ.push(40);
    minPQ.push(30);
    
    cout << "Priority Queue (Min Heap): ";
    auto temp = minPQ;   // copy
    while (!temp.empty()) {
        cout << temp.top() << " ";   // top = smallest
        temp.pop();
    }
}

int main() 
{
    explainPriorityQueue();
}
