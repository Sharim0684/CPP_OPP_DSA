//   Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

#include <iostream>
#include <string.h>
using namespace std;
class CString
{
public:
    char s1[10], s2[10];
    CString(char str1[],char str2[] )
    {
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
    CString operator+()
    {

        cout <<  strcat(s1, s2)<<endl;
    }
    CString operator==(CString c)
    {
         if(strcmp(str1, c2.str1)==0)
         return 1;
         else 
         return 0;
    }
};
int main()
{
    char str1[]="shaikh";
    char str2[]=" sharim";
   CString a1 (str1, str2);
   +a1;

   return 0;
}