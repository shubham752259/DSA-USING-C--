//List using STL

#include<bits/stdc++.h>
#include<list>
using namespace std;
int main()
{
    list<int> l;

    list<int> n(5,100);

    cout<<"Printing n-> "<<endl;

    for(int i:n)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;

    l.push_back(1);

    l.push_front(2);

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());

    cout<<"After erase"<<endl;

    for(int i:l)
    {
        cout<<i<<endl;
    }

    cout<<"Size of list-> "<<l.size()<<endl;


return 0;
}