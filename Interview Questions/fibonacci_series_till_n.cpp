//print all the fibonacci numbers till nth term
//0,1,1,2,3,5,8,13,21....

#include<bits/stdc++.h>
using namespace std;

//recursive 1
// void fibonacci(int a, int b, int n){
//     if(n==0){
//         return;
//     }
//     int nextterm = a+b;
//     cout<<nextterm<<" ";
//     return fibonacci(b,nextterm,--n);
// }

//recursive 2
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;

    int a =0, b = 1;
    // cout<<a<<" "<<b<<" ";
    // int nextterm=0;
    // for(int i =0; i<n-2; i++){
    //     nextterm = a+b;
    //     cout<<nextterm<<" ";
    //     a = b;
    //     b = nextterm;
    // }

    //recursive 1
    // cout<<a<<" "<<b<<" ";
    // fibonacci(0,1,n-2);

    //recursive 2
    for(int i =0; i<n; i++){
        cout<<fibonacci(i)<<" ";
    }
}