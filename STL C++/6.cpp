//Queue using STL
//FIFO -> First in First Out

#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("Shubham");

    q.push("Kuamr");

    q.push("Singh");

    cout<<"Size before pop-> "<<q.size()<<endl;

    cout<<"First Element-> "<<q.front()<<endl; //before it was Shubham

    q.pop(); //Removes the first element

    cout<<"First Element-> "<<q.front()<<endl; //after pop it is Kumar

    cout<<"Size after pop-> "<<q.size()<<endl;

return 0;
}