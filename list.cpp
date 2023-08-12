#include <iostream>
#include<list>
using namespace std;
int main()
{
	 list<int> l1;
	for(int i=0;i<5;i++)
	{
		l1.push_back(i*100);
		
	}
	l1.push_front(10);
	l1.push_back(50);
	l1.reverse();
	l1.sort();
	l1.pop_front();
	l1.pop_back();
	l1.remove(200);
	
	cout<<"front element is : "<<l1.front()<<endl;
	list<int> :: iterator x;
	for( x = l1.begin(); x!=l1.end();x++)
	{
		cout<<*x<<' ';
	}
	return 0;
}
