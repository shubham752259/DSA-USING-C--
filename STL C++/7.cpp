//priority Queue

#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    //when we write like this it is max_heap

    priority_queue<int> maxi; 

    //when we write like this it is min_heap

    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1);

    maxi.push(3);

    maxi.push(2);

    maxi.push(0);

    int n = maxi.size();

    for(int i=0; i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(5);

    mini.push(1);
    
    mini.push(0);
    
    mini.push(4);
    
    mini.push(3);

    int m = mini.size();

    for(int i = 0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();

    }

    cout<<endl;

    cout<<"Is Empty or not-> "<<maxi.empty()<<endl;

    cout<<"Is Empty or not-> "<<mini.empty()<<endl;

return 0;
}