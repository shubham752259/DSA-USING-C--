#include<bits/stdc++.h>
using namespace std;
int CountBit(int num){
    int count = 0;
    while(num!=0){
        if(num & 1){
            count++;
        }
        num = num >> 1;
    }
    return count;
}

int main()
{
int A, B;
cout<<"Enter the value of A: ";
cin>>A;
cout<<"Enter the Value of B: ";
cin>>B;
int ToTABLbits = CountBit(A) + CountBit(B);
cout<<"The total number of bits is: "<<ToTABLbits<<endl;
return 0;
}