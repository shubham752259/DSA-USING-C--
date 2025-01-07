#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;
    //print's the array
    for(int i = 0; i<=size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing Done"<<endl;
}

int main()
{
int first[15] ={1,2};
printArray(first,15);
cout<<endl;

int second[10] ={2,5,7};
printArray(second,10);
cout<<endl;

int third[5] = {5};
printArray(third,5);
cout<<endl;

//this is the way you can print same digit apart from 0 
int fourth[10] ={1};
for(int i = 0; i<10; i++) {
    fourth[i] = 5;
}
printArray(fourth,10);
cout<<endl;

int fifth[10] ={1};
printArray(fifth,10);
cout<<endl;
//This line of code is used to find the size of array
int fifthSize = sizeof(fifth)/sizeof(int);
cout<<"The Size of Fifth is: "<<fifthSize<<endl;
return 0;
}