#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, i = 1, sum = 0;
cin>> n;
while(i<=n){
    sum = sum + (i*2);
    i++;
}
cout<<"The Sum of first "<< n << " Even terms is: "<< sum <<endl;
return 0;
}