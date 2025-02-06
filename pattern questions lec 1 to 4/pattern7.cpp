#include<bits/stdc++.h>
using namespace std;
int main()
{
int row = 1, n;
cin>>n;
while(row<=n){
    int col = 1;
    int value = row;
    while(col<=row){
        cout<<value<<" ";
        value++;
        col++;
    }
    cout<<endl;
    row++;
}
return 0;
}