#include<bits/stdc++.h>
using namespace std;

//approach 1: find the reverse; if reverse==num then it is a palindrome
int reverse(int num){
    int revnum = 0;
    while(num!=0){
        revnum = (revnum*10) + num%10;
        num/=10;
    }
    return revnum;
}
int main(){

    int value;
    cin>>value;
    if(reverse(value)==value){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }

}