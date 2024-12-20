#include<bits/stdc++.h>
using namespace std;
int ArrSum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
int size;
cout<<"Enter the size of the array"<<endl;
cin>>size;

int arr[size];
cout<<"Enter the elements of the array"<<endl;
for(int i = 0;i<size; i++){
    cin>>arr[i];
}

int sum = ArrSum(arr, size);

cout<<"The sum of "<<size<<" is: "<<sum<<endl;
return 0;
}