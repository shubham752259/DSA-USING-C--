#include<bits/stdc++.h>
using namespace std;
int FabSeries(int n){
    if(n==1){
        return 0;
    }
        if(n==2){
        return 1;
    }
   int a = 0;
   int b = 1;
    for(int i = 3; i<=n; i++){
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return b;
}

int main()
{
int n;
cin>> n;
cout << "The number at position " << n << " is " << FabSeries(n) << endl;
return 0;
}