#include<bits/stdc++.h>
using namespace std;
int main()
{
int count;
int n;
while(n!=0){
    if(n&1){
        count++;
    }
    n = n>>1;
}
return count;
}