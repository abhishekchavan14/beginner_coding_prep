#include<bits/stdc++.h>
using namespace std;

//recursive
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

//naive approach
// int fibonacci(int n){
//     int a =0, b=1;
//     int nextterm = 0;
//     for(int i =2; i<=n; i++){
//         nextterm = a+b;
//         a=b;
//         b=nextterm;
//     }
//     return b;
// }

int main(){

    int n;
    cin>>n;

    cout<<"Fibonacci number at "<<n<<"th index is: "<<fibonacci(n);
}