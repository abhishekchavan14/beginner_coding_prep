#include<bits/stdc++.h>
using namespace std;

void lowercase(char str[]){
    for(int i =0; i<strlen(str); i++){
        if(str[i]>64 && str[i]<91 && str[i]!='\0'){//----------> ASCII value of Capital A is 65 and small a is 65+32 = 97.
            str[i]+=32;
        }
    }
}

int main(){

    string input;
    cin>>input;

    int len = input.length(); //----------> length of the string 
    
    char string[len+1]; //---------------->character array of size len+1; +1 for the NULL character '\0' to know the end of array

    input.copy(string, len); //-----------> to copy the string into the character array

    string[len] = '\0'; //----------------> defining last element as NULL

    lowercase(string);

    //we can set two pointers at begining and end of the char array
    int left = 0;
    int right = len-1;
    while(left<right){
        if(string[left]!=string[right]){
            cout<<"Not Palindrome"<<endl;
            return 0;
        }
        else{
            left++;
            right--;
        }
    }
    cout<<"Palindrome"<<endl;

}