#include <iostream>
using namespace std;

// Function to count the number of set bits in a number
int countSetBits(int n) {
    int count = 0;
    while(n != 0) {
        if(n & 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main() {
    int A, B;
    
    // Input the two numbers
    cout << "Enter the first number (A): ";
    cin >> A;
    cout << "Enter the second number (B): ";
    cin >> B;
    
    // Calculate the total number of set bits in both numbers
    int totalSetBits = countSetBits(A) + countSetBits(B);
    cout << "The total number of set bits in " << A << " and " << B << " is: " << totalSetBits << endl;

    return 0;
}
