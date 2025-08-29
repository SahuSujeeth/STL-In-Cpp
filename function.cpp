#include <iostream>
using namespace std;
void print() // Here the void is nothing returns any values in the end.
{
    cout << "Hello" << endl;
}
int sum(int a, int b)// Here the innt is return something the value..
{
    return a + b;
}

int main()
{
    print();
    int s = sum(1, 5);
    cout << s;

    return 0;
}