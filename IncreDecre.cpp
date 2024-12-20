#include<bits/stdc++.h>
using namespace std;
int main()
{
// int a , b = 1;
// a =10;
// if(++a){
//     cout<<b;
// }
// else{
//     cout<<++b;
// }

int a = 1, b = 2;
if(a-->0 && ++b>2){
    cout<<"Stage-1 if prints";
}
else{
    cout<<"stage -2 else print";
}
return 0;
}