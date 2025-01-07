#include<bits/stdc++.h>
using namespace std;
int main()
{
int number[15];

//accesing the array
cout<<"The value of array at 14th index: "<< number[14]<<endl; //OUTPUT IS A GARBAGE VALUE.

//ACCESSING SECOND ARRAY
int second[3] = {5, 7 , 11};
cout<< "The element on the 2nd index is: "<<second[2]<<endl;
cout<<"Everything is running fine"<<endl;
return 0;
}