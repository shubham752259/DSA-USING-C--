#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[20];

    cout<<"Enter the name-> ";
    cin>>name;

    name[2] = '\0'; //jaise null character aa jae ga stop ho jae ga


    cout<<"Your name is-> ";
    cout<<name<<endl;

return 0;
}