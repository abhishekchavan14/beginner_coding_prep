#include<bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    bool flag = true;
    for(int i =0; i<n/2; i++){
        if(arr[i]!=arr[n-1-i]){
            flag = false;
            cout<<"NO";
            break;
        }
    }
    if(flag==true){
        cout<<"YES";
    }

}