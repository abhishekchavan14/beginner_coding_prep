#include<bits/stdc++.h>
using namespace std;


//isalnum() is used to check if the character is alphanumeric. If str1 is alphanumeric then isalnum(str1) returns 1;
bool palindrome(string str){
    int start = 0;
    int end = str.size()-1;

    while(start<=end){
        if(isalnum(str[start])){
            if(isalnum(str[end])){
                if(tolower(str[start])!=tolower(str[end])){
                    return false;
                }
                else{
                    start++;
                    end--;
                }
            }
            else{
                end--;
            }
        }
        else{
            start++;
        }
    }
    return true;
}

int main(){

    string str;
    getline(cin,str);

    cout<<palindrome(str);

}