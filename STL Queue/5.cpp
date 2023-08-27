// Schedule a interview by using applicant's reaching time using c++ STL

#include<bits/stdc++.h>
int term;
using namespace std;
class Applicant{
    public:
    string name;
    string currentTime;
};
Applicant getEntry()
{
    Applicant temp;
    cout<<"Enter your name: ";
    cin>>temp.name;
    cout<<"Enter current time: ";
    cin>>temp.currentTime;
    return temp;

}
int main()
{
    queue<Applicant> l1;
    for (int i = 0; i < 5 ; i++)
    {
        /* code */
        l1.push(getEntry());

    }
    Applicant temp;

    for (int i = 0; i < 5 ; i++)
    {
        /* code */
        temp = l1.front();
        cout<<"Applicant name : "<<temp.name <<" your inteview time "<<temp.currentTime <<endl;
        l1.pop();

    }
    
    return 0;
}