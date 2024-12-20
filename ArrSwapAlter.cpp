#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlter(int arr[], int size){
    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main()
{
int odd[5] = {1, 2, 7, 5, 8};
int even[6] = {9, 2, 8, 4, 1, 6};

swapAlter(even, 6); //For even array
printArray(even, 6);

cout<<endl;

swapAlter(odd, 5); //for odd array
printArray(odd, 5);
return 0;
}