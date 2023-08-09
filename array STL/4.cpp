//  Returns the element from the given index using the STL array


#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>ar = {1,2,3,4,5};

    cout<<get<0>(ar)<<endl;
    cout<<get<1>(ar)<<endl;
    cout<<get<2>(ar)<<endl;
    cout<<get<3>(ar)<<endl;
    cout<<get<4>(ar)<<endl;

    return 0;
}