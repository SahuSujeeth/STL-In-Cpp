#include <iostream>
using namespace std;
void ExplainPairs()
{
    pair<int, int> S = {1, 3};
    cout << S.first << " " << S.second << endl;
    pair<int, pair<int, int>> s = {1, {3, 4}}; // Here the first int is the 1  and for the second set we need to write second.first for the frist element and
    // second.second for the second element inthis..
    cout << s.first << " " << s.second.second << " " << s.second.first << endl;
    pair<int, int> arr[] = {{1, 3}, {9, 2}, {9, 6}};
    // Here the array inndex are like this 1st set is the 0 index and the 2nd the index 1 ans the last one like index 2...
    cout << arr[1].second << " " << arr[2].second;
}

int main()
{
    ExplainPairs();
    return 0;
}