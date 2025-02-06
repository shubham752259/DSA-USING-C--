#include<bits/stdc++.h>
#include<string>
    bool checkequal(int a[26], int b[26]){
        for(int i=0; i<26; i++){
            if(a[i] != b[i])
            return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        //character count array
        int count1[26] = {0};

        for(int i=0; i<s1.length(); i++){
            int index =  s1[i] - 'a';
            count1[index]++;
        }
        //traverse s2 string in the window of size s1 length and compare
        int  i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        //running the first window
        while(i < windowSize){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if(checkequal(count1, count2)){
            return 1;
        }
        //aage window process karo
        while(i<s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;
            i++;
            if(checkequal(count1, count2)){
                return 1;
            }
        }
        return 0;
    }