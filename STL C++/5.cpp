//Stack using STL
//LIFO-> Last in First Out
//FILO-> First in Last Out

#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Shubham");

    s.push("Kumar");

    s.push("Singh");

    cout<<"Top Element-> "<<s.top()<<endl; //top is used to see what is at the top of all the element in the stack

    s.pop();

    cout<<"Top Element-> "<<s.top()<<endl;

    cout<<"Size of stack-> "<<s.size()<<endl;

    cout<<"empty or not-> "<<s.empty()<<endl;

return 0;
}