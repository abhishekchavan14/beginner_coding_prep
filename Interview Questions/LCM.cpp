#include<bits/stdc++.h>
using namespace std;

int hcf(int n1, int n2){
    if(n1==n2){
        return n1;
    }
    if(n1>n2){
        return hcf(n1-n2, n2);
    }
    else{
        return hcf(n1, n2-n1);
    }
}

int main(){

    int num1, num2;
    cin>>num1>>num2;

    //LCM will range from max(num1, num2) to num1*num2
    // for(int i =max(num1, num2); i<=num1*num2; i+=max(num1, num2)){
    //     if(i%num1==0 && i%num2==0){
    //         cout<<i;
    //         break;
    //     }
    // }

    //formula: LCM = (num1*num2)/HCF
    cout<<(num1*num2)/hcf(num1,num2);

}