//Deque using STL

#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1); //first element will be push pushed to last

    d.push_front(2); //first element will be push pushed to first

    for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    // d.pop_front();
    // cout<<endl;

    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<"Element at index 1-> "<<d.at(1)<<endl;

    cout<<"Front element-> "<<d.front()<<endl;

    cout<<"back element-> "<<d.back()<<endl;

    cout<<"Empty or not-> "<<d.empty()<<endl;

    cout<<"before erase-> "<<d.size()<<endl;

    d.erase(d.begin(), d.begin()+1); //this will erase from a specific part of deque

    cout<<"After erase-> "<<d.size()<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }

return 0;
}