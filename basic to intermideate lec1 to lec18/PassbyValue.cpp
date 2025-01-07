// #include<bits/stdc++.h>
// using namespace std;
// int update(int a){
//     int ans = a*a;
//     return ans;
// }
// int main()
// {
// int a = 15;
// a = update(a);
// cout<<a<<endl;

// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int dummy(int n){
    n++;
    cout<<"The value of n is "<<n<< endl;
}
int main()
{
int n;
cin>>n;
dummy(n);
cout<<"in main n value is: "<<n<<endl;
return 0;
}