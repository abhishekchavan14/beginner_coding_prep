#include<bits/stdc++.h>
using namespace std;


//abhishek

int main(){

    string str;
    getline(cin, str);

    int count[26];

    for(int i=0; i<26; i++){
        count[i]=0;
    }

    for(int i=0; i<str.length(); i++){
        count[str[i]-'a']++;
    }

    int ans_freq =0 ; 
    char ans_char = 'a';

    for(int i=0; i<26; i++){
        if(count[i]>=ans_freq){
            ans_freq=count[i];
            ans_char=i+'a';
        }
        // ans_freq = max(count[i], ans_freq);
    }

    cout<<ans_freq<<endl;
    cout<<ans_char<<endl;




}