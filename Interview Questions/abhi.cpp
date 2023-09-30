#include<bits/stdc++.h>
using namespace std;

void lowercase(char str[]){
    for(int i =0; i<strlen(str); i++){
        if(str[i]>64 && str[i]<91 && str[i]!='\0'){
            str[i]+=32;
        }
    }
}

int main(){

    string input;
    cin>>input;
    int len = input.length();
    char string[len+1];
    input.copy(string, len);
    string[len] = '\0';
    lowercase(string);
    
    for(int i =0; i<len; i++){
        cout<<string[i];
    }
}