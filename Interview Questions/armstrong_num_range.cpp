#include<bits/stdc++.h>
using namespace std;

bool isarmstrong(int num){
    //find the length
    int temp1 = num;
    int len =0 ;
    while(temp1!=0){
        len++;
        temp1/=10;
    }
    //calculate sum
    int temp2 = num;
    int sum =0;
    while(temp2!=0){
        sum+=pow(temp2%10, len);
        temp2/=10;
    }
    
    return sum==num;
}

int main(){

    int start, end;
    cin>>start>>end;

    while(start<=end){
        if(isarmstrong(start)){
            cout<<start<<" ";
        }
        start++;
    }
}