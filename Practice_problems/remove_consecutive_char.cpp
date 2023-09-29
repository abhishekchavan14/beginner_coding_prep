#include<bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string S)
    {
        string ans = "";
        for(int i =0; i<S.size(); i++){
            if(S[i]!=S[i+1]){
                ans.push_back(S[i]);
            }
        }
        return ans;
    }

int main(){

    string s;
    cin>>s;
    
    cout<<removeConsecutiveCharacter(s)<<endl;
}