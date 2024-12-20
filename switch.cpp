#include<bits/stdc++.h>
using namespace std;
int main()
{
char ch = '1';
cout << endl;
switch (ch)
{
case 1 : cout<< "first" << endl;
    break; // agr ye break nhi rhe ga toh niche jo bhi likha hai excecute ho jae ga
case '1' : cout<< "Charater one" << endl;
    break;
default: cout<< "it is default case"<<endl; //not mandatory
    break;
}
return 0;
}