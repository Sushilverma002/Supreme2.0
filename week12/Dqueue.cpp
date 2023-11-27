#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main()
{
    deque<int> dq;

    dq.push_back(5);
    dq.push_front(100);
    dq.pop_front();

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    cout << "size od dque:" << dq.size() << endl;
    return 0;
}