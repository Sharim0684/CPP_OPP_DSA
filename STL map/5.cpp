// Create a map, insert some pairs and Find the occurrence of each pair and print it on
// the screen.

#include<bits/stdc++.h>
using namespace std;
int main()
{
          map<int,int> mp;
          mp.insert({1,10});
          mp.insert({2,20});
          mp.insert({3,30});

          map<int,int> :: iterator x;

         
          for (x = mp.begin(); x!=mp.end(); x++)
          {
            cout<<"key: "<< x->first << " , value: "<< x->second <<endl;
          }
          return 0;                                            
}