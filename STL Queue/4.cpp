//  Manage a queue for multiple input and store in ascending order of his first character

#include <iostream>
#include <queue>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    queue<string> q;
    int choice = 1;
    string str;
    while (true)

    {
        cout << "want to enter more word  press 1 for yes and press 0 for No " << endl;
        cin >> choice;
        if (choice == 0)
            break;
        cout << "Enter a single word string ";
        cin >> str;
        q.push(str);
    }


    int size = q.size();
    string temp[size];



    for (int i = 0; i < size; i++)
    {
        temp[i] = q.front();
        q.pop();
    }


    sort(temp, temp + size);



    for (int i = 0; i < size; i++)
    {
        q.push(temp[i]);
    }



    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    
    return 0;
}