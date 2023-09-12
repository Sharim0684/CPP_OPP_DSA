//  Unordered_set operators in C++ STL(== and !=)
#include<bits/stdc++.h>
using namespace std;
int main()

{
    unordered_set<int> sample1 = {10,20,30,40,50};
    unordered_set<int> sample2 = {20,30,10,40,50};
    unordered_set<int> sample3 = { 10,20,30,50,60};


    if(sample1==sample2)
    {
        cout<<"sample1 and "<<" sample2 are equal "<<endl;

    }
    else
    {
        cout<<"sample1 and "<<"sample2 are not same"<<endl;
    }
    if(sample2 == sample3)
    {
        cout<<"sample2 and "<<" sample3 are same "<<endl;
    }
    else
    {
        cout<<"sample2 and "<< " sample3 are not same "<<endl;
    }
    return 0;
}