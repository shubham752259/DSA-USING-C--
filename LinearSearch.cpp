#include<bits/stdc++.h>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
//Whether 1 is present is not or not?

cout<<"Enter the Key: "<<endl;
int key;
cin>>key;

bool found = search(arr, 10, key);
if(found){
    cout<<"key is present"<<endl;
}
else{
    cout<<"Key not found"<<endl;
}

return 0;
}