#include<bits/stdc++.h>
using namespace std;

//converting the string array character in lowercase
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

    lowercase(string); //------------------->callin lowercase so Tenet is also a palindrome

    for(int i =0; i<len/2; i++){ //----------> No need to iterate complete array, as after half the characters are already checked
        if(string[i]!=string[len-i-1]){ //--------> Note how len-i-1 is used
            cout<<"Not palindrome"<<endl;
            return 0;
        }
    }
    cout<<"Palindrome"<<endl;
}

// IMP Note:
// To find the length of a string we use "stringname.length()"
// To find the lenght of a character array we use "strlen(arrname)"