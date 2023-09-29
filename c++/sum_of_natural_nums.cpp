#include<iostream>
using namespace std;

// 1+2+3  
int sumofn(int n){
    int sum;
    for(int i = 1; i<=n; i++){
        // sum = sum + i;
        sum+=i;
    }
    return sum;
}
int main(){
    int num = 5;
    cout<<sumofn(num);
}

