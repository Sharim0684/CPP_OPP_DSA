//  Find the total number of elements of the set container.

#include <set>  
#include <iostream>  
using namespace std;  
   
int main()  
{   
    set<char> num {'a', 'b', 'c', 'd'};   
    cout << "num set contains " << num.size() << " elements.\n";  
    return 0;  
}  