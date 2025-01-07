#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            // If the element is 0
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;

            // If the element is 1
            case 1:
                mid++;
                break;

            // If the element is 2
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

int main() {
    int arr[7] = {0,1,2,1,2,1,2};

    sort012(arr, 7);
    printArray(arr, 7);

    return 0;
}
