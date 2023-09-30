#include<bits/stdc++.h>
using namespace std;

//recursive
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

    //brute force approach
    // int HCF = 1;
    // for(int i =1; i<=num1||i<=num2; i++){
    //     if(num1%i==0 && num2%i==0){
    //         HCF = i;
    //     }
    // }
    // cout<<HCF;

    //Euclidean Algo (repeated subtraction)
    // while(num1!=num2){
    //     if(num1>num2){
    //         num1-=num2;
    //     }
    //     else{
    //         num2-=num1;
    //     }
    // }
    // cout<<num1;

    //recursive
    cout<<hcf(num1, num2);
}

//GCD will have same code