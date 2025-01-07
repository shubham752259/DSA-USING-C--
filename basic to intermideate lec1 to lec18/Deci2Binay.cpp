#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
double ans = 0; /*answer size must be greater so
 we will use double instead of int*/
int i = 0;
while(n!=0){
    int bit = (n & 1);
    ans = (bit * pow(10 , i)) + ans;
    n = n>>1;  //Right shift every time until n = 0
    i++;
}
cout<<"ANSWER IS : "<< ans << endl;

return 0;
}