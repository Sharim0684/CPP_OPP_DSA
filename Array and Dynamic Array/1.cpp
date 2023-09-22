// Create an ADT array without using STL.


#include<bits/stdc++.h>
using namespace std;
class ADT
{
    private:
    int x,y;

    public:
    void setdata(int a, int b )
    {
        x=a;
        y=b;
        
    }
    int add()
    { 
        int s;
        s = x+y; 
        cout<<s<<endl;
    }
    int  sub()
    {
        int s;
      s = x-y;
      cout<<s<<endl;
    }
    int multi()
    {
        cout<< x*y;
    }
};
int main()

{
    ADT i1;
    i1.setdata(2,3);
    i1.add();
    i1.sub();
    i1.multi();


    return 0;

}