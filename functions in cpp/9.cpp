// Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.


#include<iostream>
using namespace std;
int over(int x,int y)
{
    if (x>y)
    {
        return x;
    }
    else if(x<y)
    {
        return y;
    }
}
float over (float x, float y)
{
    if (x>y)
    {
        return x;
    }
    else if(x<y)
    {
        return y;
    }
}
int main()
{
    int a,b;
    cout<<"Enter an  two integer number";
    cin>>a>>b;
    float c,d;
    cout<<"Enter a two floating value is";
    cin>>c>>d;
    over(a,b);
    over(c,d);

    cout<<"maximum number using integer value is  "<<over(a,b)<<endl;
    cout<<"maximum num using float value is"<<over(c,d);
}