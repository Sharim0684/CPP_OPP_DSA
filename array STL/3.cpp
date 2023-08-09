// Find the first and last element using the STL array.


#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,7>ar={1,2,3,4,5,7,33};
    cout<<"first element : "<<ar.front()<<endl;
    cout<<"last element : "<<ar.back()<<endl;

    return 0;

}
