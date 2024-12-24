//set using STL

#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
   
    s.insert(5); //it doesn't matter how many time a same and similar number is used
   
    s.insert(5); // it will only be displayed once
    
    s.insert(1);
    
    s.insert(6);
    
    s.insert(0);

    for(auto i : s){
        cout<<i<<" ";
    } cout<<endl;
    
    set<int>::iterator it = s.begin();

    it++;

    s.erase(it);

    for(auto i:s){
        cout<<i<<" ";
    }

return 0;
}