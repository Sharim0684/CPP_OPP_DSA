// Exchange the contents of two queues but the queues must be of the same data type,
// although sizes may diffe

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q, q1;
    int v = 12;
    for (int i = 0; i < 5; i++)
    {
        q.push(v + 1);
        v++;
    }

    for (int i = 0; i < 4; i++)
    {
        q1.push(v + 1);
        v++;
    }
    q.swap(q1);

    cout << "Queue q is : ";
    while (!q.empty())
    {
        cout << q.front()<<" ";
        q.pop();
    }
    cout << endl;
    cout << "Queue q1 is : ";
    while (!q1.empty())
    {
        cout << q1.front()<<" " ;
        q1.pop();
    }

    return 0;
}