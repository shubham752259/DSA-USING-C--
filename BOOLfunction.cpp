#include<bits/stdc++.h>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}
int main()
{
int a;
cin>> a;
if(isEven(a)){
    cout<<"The number "<<a<< " is Even"<< endl;
}
else{
    cout<<"The number "<<a<< " is odd"<<endl;
}
return 0;
}