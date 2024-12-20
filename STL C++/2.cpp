#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

    vector<int> v;

    cout<<"size-> "<<v.capacity()<<endl; // This show what is the capacity and memory size

    v.push_back(1);

    cout<<"size-> "<<v.capacity()<<endl;

    v.push_back(2);

    cout<<"size-> "<<v.capacity()<<endl;

    v.push_back(3); // if the size above the mention size then it automatically double from the previous one

    cout<<"size-> "<<v.capacity()<<endl;

return 0;
}