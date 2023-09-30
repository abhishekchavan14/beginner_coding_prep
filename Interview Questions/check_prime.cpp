#include<bits/stdc++.h>
using namespace std;

// //brute appraoch 1 O(N/2)
// bool isprime(int num){
//     if(num<=1){
//         return false;
//     }
//     for(int i =2; i<=num/2; i++){
//         if(num%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// //brute approach 2 O(sqrt(N))
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

// //recursion O(N)
// bool isprime(int num, int i){
//     if(num<=1){
//         return false;
//     }
//     if(num==i){
//         return true;
//     }
//     if(num%i==0){
//         return false;
//     }
//     return isprime(num, ++i);
// }


int main(){

    int num;
    cin>>num;
    if(isprime(num)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }

}