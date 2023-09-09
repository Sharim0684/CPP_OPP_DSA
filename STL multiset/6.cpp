// Create a c++ program using multiset and inserts the element x in the multiset –>
  
  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
     multiset<string> s;
     s.insert("a");
     s.insert("b");
     s.insert("c");
     s.insert("d");

     cout<<"The Element in the multiset is : ";

     multiset< string> :: iterator y;
     for (auto y = s.begin(); y!=s.end();y++)
     {
        cout<<*y<<" ";
     }
     return 0;
  }