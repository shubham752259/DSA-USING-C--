#include<bits/stdc++.h>
using namespace std;
int main()
{
int amount =1330;
int note100 =0, note50 =0, note20 = 0, note1=0;

while(amount>0){
    if(amount>=100){
        switch(100){
            case 100:
            amount = amount-100;
            note100++;
            break;
        }
    }
    else if(amount>=50){
        switch(50){
            case 50:
            amount = amount - 50;
            note50++;
            break;
        }
    }
    else if(amount>=20){
        switch(20){
            case 20:
            amount = amount - 20;
            note20++;
            break;
        }
    }
    else{
        switch (1)
        {
        case 1:
        amount = amount - 1;
        note1++;
        break;
        }
    }
}
    cout << "You will need:" << endl;
    cout << note100 << " hundred rupee notes" << endl;
    cout << note50 << " fifty rupee notes" << endl;
    cout << note20 << " twenty rupee notes" << endl;
    cout << note1 << " one rupee notes" << endl;
return 0;
}