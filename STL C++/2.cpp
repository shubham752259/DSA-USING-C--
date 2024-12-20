#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    vector<int> a(5,1); //here size is 5 and initialize with element 1, if not initialize then it will be 0

    vector<int> last(a); //copy all the element of a in last

    cout<<"Print last-> ";
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"capacity-> "<<v.capacity()<<endl; // This show what is the capacity and memory size

    v.push_back(1);

    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(2);

    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(3); // if the size above the mention size then it automatically double from the previous one

    cout<<"capacity-> "<<v.capacity()<<endl;

    cout<<"size->"<<v.size()<<endl;

    cout<<"Element at 2nd element is-> "<<v.at(2)<<endl;

    cout<<"First Element-> "<<v.front()<<endl;

    cout<<"Last Element-> "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); //it remove last element 

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size-> "<<v.size()<<endl;

    v.clear(); // it clear the size of the vector

    cout<<"After clear size-> "<<v.size()<<endl;

return 0;
}