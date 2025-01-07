#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i = 1;
while(i<=n){
    int j =1;
    int space = n-i;
    while(space){
        cout<<" "; //space print karlo phele
        space--;
    }
    while(j<=i){
        cout<<"*"; //star print karlo
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}