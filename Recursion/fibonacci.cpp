//0 1 1 2 3 5 8 13...

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){

    if(n ==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){

    //input index
    int n;
    cin>>n;
    cout<<fibonacci(n);

}