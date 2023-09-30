#include<bits/stdc++.h>
using namespace std;

bool isprime(int num){
    if(num<=1){
        return false;
    }
    for(int i =2; i<=sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int start;
    int end;
    cin>>start>>end;

    while(start<=end){
        if(isprime(start)){
            cout<<start<<" ";
        }
        start++;
    }

}

//O(Nsqrt(N))