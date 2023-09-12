// You are given an array A of size N. You need to insert the elements of A into a
// multimap(element as key and index as value) and display the results. Also, you need
// to erase a given element x from the multimap and print "erased x" if successfully
// erased, else print "not found".

#include <bits/stdc++.h>
using namespace std;
multimap<int, int> multimapInsert(int arr[], int n)
{
    multimap<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp.insert({arr[i], i});
    }
    return mp;
}
void multimapdisplay(multimap<int, int> &mp)
{
    for(auto &it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
void multimapErase(multimap<int, int> &mp, int x)
{
    if (mp.count(x))
    {
        cout << "erased " << x;

        mp.erase(x);
    }
    else
    {
        cout << "not found";
    }
    
}
int main()
{
    int arr[10] = {1, 2, 4, 5, 6, 78, 67, 89, 44, 32};
    multimap<int,int> mp = multimapInsert(arr,10);
    multimapdisplay(mp);
    multimapErase(mp,78);
    multimapdisplay(mp);
    
    return 0;
}