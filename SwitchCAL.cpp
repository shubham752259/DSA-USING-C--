#include<bits/stdc++.h>
using namespace std;
int main()
{
int a, b;
cout<< "Enter the value of a: "<<endl;
cin>>a;

cout<< "Enter the value of b: "<<endl;
cin>>b;

char op;
cout<< "Enter the operation: "<<endl;
cin>>op;

switch(op){
    case '+': cout<<"The sum of a and b is: "<<(a+b)<<endl;
    break;

    case '-': cout<<"The difference of a and b is: "<<(a-b)<<endl;
    break;
        
    case '*': cout<<"The product of a and b is: "<<(a*b)<<endl;
    break;

    case '/': cout<<"The division of a and b is: "<<(a/b)<<endl;
    break;    

    case '%': cout<<"The modulus of a and b is: "<<(a%b)<<endl;
    break;

    default: cout<<"<DEFAULT"<<endl;
}
return 0;
}