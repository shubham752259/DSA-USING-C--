#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int start = 0; 
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(key > arr[mid]){//we go right side
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid -1;
        }
 
        mid = start + (end-start)/2;
    }
    
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int start = 0; 
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(key > arr[mid]){//we go right side
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid -1;
        }
 
        mid = start + (end-start)/2;
    }
    
    return ans;
}

int main()
{

int odd[7]= {1,2,3,3,3,3,5};

cout<<"first occurance of 3 is at index: "<< firstOcc(odd, 7, 3) << endl;
cout<<"last occurance of 3 is at index: "<< lastOcc(odd, 7, 3) << endl;

cout<<"Total number of occurance of 3 in arr odd[] is: "<< ((lastOcc(odd, 7, 3) - firstOcc(odd, 7, 3)) + 1)<< endl;

return 0;
}

// #include <bits/stdc++.h> 
// int firstOcc(vector<int>& arr, int n, int key){
//     int start = 0; 
//     int end = n-1;
//     int mid = start + (end-start)/2;
//     int ans = -1;

//     while(start<=end){
//         if(arr[mid] == key){
//             ans = mid;
//             end = mid-1;
//         }
//         else if(key > arr[mid]){//we go right side
//             start = mid + 1;
//         }
//         else if(key < arr[mid]){
//             end = mid -1;
//         }
 
//         mid = start + (end-start)/2;
//     }
    
//     return ans;
// }

// int lastOcc(vector<int>& arr, int n, int key){
//     int start = 0; 
//     int end = n-1;
//     int mid = start + (end-start)/2;
//     int ans = -1;

//     while(start<=end){
//         if(arr[mid] == key){
//             ans = mid;
//             start = mid+1;
//         }
//         else if(key > arr[mid]){//we go right side
//             start = mid + 1;
//         }
//         else if(key < arr[mid]){
//             end = mid -1;
//         }
 
//         mid = start + (end-start)/2;
//     }
    
//     return ans;
// }
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//    pair <int,int> p;
//    p.first = firstOcc(arr, n, k);
//    p.second = lastOcc(arr, n, k);
//    return p;
// }