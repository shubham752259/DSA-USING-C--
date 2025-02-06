#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;
char ch ='A';
while(i<=n){
    int j =1;
    while(j<=n){
        ch = 'A'+i+j-2;
        cout<<ch<<" ";
        ch++;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}