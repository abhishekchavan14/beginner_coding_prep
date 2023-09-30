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

    char str[10] = "Tenet";
    lowercase(str);
    int left =0; 
    int right = strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right]){
            cout<<"Not"<<endl;
            return 0;
        }
        else{
            left++;
            right--;
        }
    }
    cout<<"Palindrome"<<endl;
}