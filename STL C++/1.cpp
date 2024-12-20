#include<bits/stdc++.h>
#include<array> // we will needed this STL for array access
using namespace std;
int main()
{

    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd Index: "<<a.at(2)<<endl; //this will show the element at 2nd index
    
    cout<<"Array is empty or not -> "<<a.empty()<<endl; // this will be used to see that the array have element or not

    cout<<"First Element: "<<a.front()<<endl;

    cout<<"Last Element: "<<a.back()<<endl;

return 0;
}