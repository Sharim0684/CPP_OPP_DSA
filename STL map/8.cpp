//  Given a string s of length N, containing digits written in words but in jumbled form, the
// task is to find out the digits present in the string in word form and arrange them in
// sorted order using map
// Example:
// Input: s = “ozerotwneozero”
// Output: 0012


#include<bits/stdc++.h>
using namespace std;

string findnumber(string s, int n)
{
    string ans = " ";

    map<char ,int> mp;
    for (int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    while(mp['z'] && mp['e'] && mp['r'] && mp['o'])
    {
        mp['z']--;
        mp['e']--;
        mp['r']--;
        mp['o']--;
        ans += '0';        
    }
    while(mp['o']&& mp['n'] && mp['e'])
    {
        mp['o']--;
        mp['n']--;
        mp['e']--;
        ans += '1';

    }
    while (mp['t'] && mp['w'] && mp['o'])
    {
        mp['t']--;
        mp['w']--;
        mp['o']--;

        ans +='2';
    }
    
    while (mp['t'] && mp['h'] && mp['r'] && mp['e'] && mp['e'])
    {
       mp['t']--;
       mp['h']--;
       mp['r']--;
       mp['e']--;
       mp['e']--;
       ans += '3';
   }
   while (mp['f'] && mp['o'] && mp['u'] && mp['r'])
   {
    mp['f']--;
    mp['o']--;
    mp['u']--;
    mp['r']--;
    ans +='4';

   }
   while (mp['f']&&mp['i']&&mp['v']&&mp['e'])
   {
    mp['f']--;
    mp['i']--;
    mp['v']--;
    mp['e']--;
    ans +='5';
   }
   while (mp['s'] && mp['i'] && mp['x'])

   {
    mp['s']--;
    mp['i']--;
    mp['x']--;

    ans +='6';
   }
   while (mp['s'] && mp['e'] && mp['v'] && mp['e'] && mp['n'])
   {
    mp['s']--;
    mp['e']--;
    mp['v']--;
    mp['e']--;
    mp['n']--;

    ans += '7';

   }
   while (mp['e'] && mp['i'] && mp['g'] && mp['h'] && mp['t'])
   {
    mp['e']--;
    mp['i']--;
    mp['g']--;
    mp['h']--;
    mp['t']--;

    ans += '8';
   }
   
   while (mp['n'] && mp['i'] && mp['n'] && mp['e'])
   {
    mp['n']--;
    mp['i']--;
    mp['n']--;
    mp['e']--;

    ans += '9';
   }
   
   return ans;
   
}
int main()
{
    string s = "ozerotwneozero";
    int n = s.size(); 

   cout<< findnumber(s,n);

    return 0;
}