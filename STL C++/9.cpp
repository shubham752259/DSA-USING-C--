//Map using STL

#include<bits/stdc++.h>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;  //map is sorted where as Unordered map is unsorted

    m[5] = "Singh";

    m[1] = "Shubham";

    m[2] = "Kumar"; //this is one of the way of Inserting element

    m.insert({13, "Hello"}); //this is another way of inserting element

    cout<<"Before Erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; 
    }

    cout<<"finding 13-> "<<m.count(13)<<endl;

    cout<<"finding 13-> "<<m.count(-13)<<endl;

    m.erase(13);

    cout<<"After erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; 
    }
    
    auto it = m.find(5);

    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

return 0;
}