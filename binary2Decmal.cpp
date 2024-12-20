#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i = 0, ans = 0;
while(n!=0){
    int digit = n % 10; //digit nikalne ke liye use kia hai
    if(digit == 1){
        ans =  ans + pow(2,i); // 2 ka power use hota hai
    }
    n = n/10; //modulus nikalne ke liye use hua hai
    i++;
}
cout<<"The answer is: "<<ans<<endl;
return 0;
}