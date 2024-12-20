//negative number to binary
#include<bits/stdc++.h>
using namespace std;

void printBinary(int n) {
    // Assuming 32 bits for the integer representation
    int count = 32;

    // Using a mask to extract the most significant bit (MSB) first
    int mask = 1 << (count - 1);  // This sets the mask to 100...0 (binary) with 31 zeros
    
    while (count--) {
        // Print the MSB first
        if ((n & mask) == 0) {
            cout << '0';
        } else {
            cout << '1';
        }
        // Shift the mask one bit to the right
        mask >>= 1;
    }
}

int main() {
    int n;
    cout << "Enter a negative decimal number: ";
    cin >> n;
    
    if (n >= 0) {
        cout << "Please enter a negative number." << endl;
        return 0;
    }

    cout << "Binary representation (Two's complement) is: ";
    printBinary(n);
    cout << endl;
    return 0;
}
