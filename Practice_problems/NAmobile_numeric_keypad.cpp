//Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence. 
//Input: GEEKSFORGEEKS
//Output: 4333355777733366677743333557777


#include<bits/stdc++.h>
using namespace std;

string keypad (string str){
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    string arr[26]={
        "2", "22", "222", "3","33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77",
        "777", "7777", "8", "88", "888", "9", "99", "999","9999"
        };

    string ans = "";

    for(int i =0; i<str.size(); i++){
        if(str[i] == ' '){
            ans+='0';
        }
        else{
            ans+=arr[str[i]-'A'];
        }
    }
    return ans;
}

int main(){

    string str;
    getline(cin,str);
    
    cout<<keypad(str);

}