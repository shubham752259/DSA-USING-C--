#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i =1;
while(i<=n){
    int j = 1;
    char Start = 'A'+n-i;
    while(j<=i){
        cout<<Start<<" ";
        Start++;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}