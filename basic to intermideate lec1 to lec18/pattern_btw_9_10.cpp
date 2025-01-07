#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, i=1;
char start = 'A';
cin>>n;
while(i<=n){
    int j = 1;
    while(j<=n){
        cout<<start<<" ";
        start++;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}