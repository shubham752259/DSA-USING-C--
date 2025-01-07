#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int i = 2;
while(i<n){
    if(n%i == 0){
        cout<< "NOT PRIME FOR "<< i << endl;
    }
    else{
        cout<< "PRIME FOR " << i << endl;
    }
    i++;
}
return 0;
}