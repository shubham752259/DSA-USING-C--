#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
bool isPrime = 1;
for(int i = 2; i<n; i++){
    if(n%i == 0){
        // cout<< "Not Prime";
        isPrime = 0;
        break;
    } 
}
if(isPrime == 0){
    cout<<"Not a prime number";
}
else{
    cout<<"number is prime";
}
return 0;
}