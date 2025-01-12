#include<bits/stdc++.h>
using namespace std;
char toLowerCase(char ch){
    if( ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char name[], int n)
{
	int st = 0;
	int e = n-1;

	while(st<=e){
		if(toLowerCase(name[st]) != toLowerCase(name[e])){
			return 0;
		}
		else{
			st++;
			e--;
		}
	}
	return 1;
}
int reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){

    int count = 0;

    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout<<"Enter the name-> ";
    
    cin>>name;

    cout<<"Your name is-> ";

    cout<<name<<endl;

    int len = getLength(name);
    cout<<"Length: "<<len<<endl;

    reverse(name, len);
    
    cout<<"Your name is-> ";

    cout<<name<<endl;

    cout<<"is palindrome or not: "<<isPalindrome(name, len)<<endl;

    cout<<"CHARACTER: "<<toLowerCase('B')<<endl;
    cout<<"CHARACTER: "<<toLowerCase('c')<<endl;


return 0;
}