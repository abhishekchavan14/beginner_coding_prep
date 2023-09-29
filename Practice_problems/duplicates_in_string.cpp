#include<bits/stdc++.h>
using namespace std;

void duplicates(string str){

    int cap_count[26];
    int small_count[26];
    for(int i = 0; i<26; i++){
        cap_count[i]=0;
        small_count[i]=0;
    }

    for(int i=0; i<str.length(); i++){
        if('a'<=str[i]<='z'){
            small_count[str[i]-'a']++;
        }
        if('A'<=str[i]<='Z'){
            cap_count[str[i]-'A']++;
        }
    }

    for(int i=0; i<26; i++){
        if(small_count[i]>1){
            char ans_small = i+'a';
            cout<<ans_small<<"-->";
            cout<<small_count[i]<<endl;
        }
    }
    for(int i =0; i<26; i++){
        if(cap_count[i]>1){
            char ans_cap = i+'A';
            cout<<ans_cap<<"-->";
            cout<<cap_count[i]<<endl;
        }
    }
}

int main(){

    string str;
    getline(cin,str);
    duplicates(str);

}