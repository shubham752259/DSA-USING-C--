#include<bits/stdc++.h>
using namespace std;
int APseries(int a, int d, int n){
        return a + (n-1)*d;
}

int main()
{
    int a,d,n;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of d: ";
    cin>>d;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    cout<<endl;
    cout<<"The "<<n<<"th term of A.P series is: "<<APseries(a,d,n)<<endl;
return 0;
}