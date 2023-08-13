// Return the first element and last element of the deque container.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d = {2,3,4,5,6,7};
    cout << "First Element: "<<d.front()<<endl;
    cout<<"last Element: "<<d.back();

    return 0;
}