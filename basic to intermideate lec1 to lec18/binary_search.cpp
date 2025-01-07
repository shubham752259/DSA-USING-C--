#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;  /* yaha int ka range hota hai 
    2^31 -1 so agr start+end ka sum iss range se jada aagya toh code 
    error throw kare ga, isle usko overcome karne ke lia ye trick use 
    kare gae jisme [start + end/2-start/2]= start/2 + end/2 aa jae ga
    */

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        
        // go to right side 
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        // mid updated since start and end has been updated.
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
int even[6] = {2,4,6,8,12,18};
int odd[5] = {3,8,11,14,16};

int evenindex = binarySearch(even, 6, 12);
int oddindex = binarySearch(odd, 5, 14);

cout<<" Index of 18 is "<< evenindex << endl;
cout<<" Index of 11 is "<< oddindex << endl;

return 0;
}