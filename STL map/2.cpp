// Create a map, where insert keys and values as string type and integer type
// respectively and print it on the screen.

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;

    m.insert(pair<int,string>(1,"sharim"));
    m.insert(pair<int,string>(2,"shaikh"));

    //OR

    // m[1]="sharim";
    // m[2]="shaikh";

    map<int,string> :: iterator x;
    for(x = m.begin(); x!=m.end();x++)
    {
        cout<<"key: "<< x->first <<" , value: "<<x->second<<endl;
    }
    return 0;
}