#include<bits/stdc++.h>
using namespace std;

string reverse_string(string str){

    for(int i = 0; i<str.length()/2; i++){
        char temp = str[i];
        str[i] = str[str.length() - 1 - i];
        str[str.length() - 1 - i] = temp;
    }

    return str;
}

int main(){

    string str;
    getline(cin,str);
    
    cout<<reverse_string(str);

}