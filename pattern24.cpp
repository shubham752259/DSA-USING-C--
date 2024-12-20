#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; // Assuming the pattern size is fixed to 5 based on your example
    cin>>n;
    int i = 1;
    while(i <= n) {
        // Ascending sequence
        int j = 1;
        while(j <= n - i + 1) {
            cout << j;
            j++;
        }
        
        // Stars
        int stars = (i - 1) * 2;
        while(stars) {
            cout << "*";
            stars--;
        }
        
        // Descending sequence
        j = n - i + 1;
        while(j >= 1) {
            cout << j;
            j--;
        }
        
        cout << endl;
        i++;
    }
    return 0;
}
