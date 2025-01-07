#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    int power_of_ten = 1;  // Start with 10^0 which is 1

    while (n != 0) {
        int bit = n & 1;
        ans = (bit * power_of_ten) + ans;  // Use the integer power_of_ten instead of pow(10, i)
        n = n >> 1;  // Right shift every time until n = 0
        power_of_ten *= 10;  // Multiply by 10 to get the next power of 10
    }

    cout << "ANSWER IS :" << ans << endl;

    return 0;
}
