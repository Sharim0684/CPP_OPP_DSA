 // C++ program to find the integers which come an odd number of times in an array
// using C++ STL


#include<iostream>

#include<array>

using namespace std;

int main()
{
    int count=0;
    array<int,5>ar = { 9,3,5,4,7};

    cout<<"array is : ";
    for (int i = 0; i < ar.size(); i++)
    {
        cout<<ar.at(i)<<" ";

    }
    cout<<endl;

    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i]%2!=0)
        {
            count++;
        }
    
    }
    
    cout<<"odd number in the array "<<count<<" number of times "<<endl;

    return 0;
    
}