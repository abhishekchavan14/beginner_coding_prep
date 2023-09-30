#include<bits/stdc++.h>
using namespace std;



int main(){

    int num;
    cin>>num;
    //brute force
    // if(num%2==0){
    //     cout<<"Even"<<endl;
    // }
    // else{
    //     cout<<"Odd"<<endl;
    // }

    //ternary operator
    // num%2==0 ? cout<<"Even":cout<<"Odd";

    //Bitwise
    //even numbers have 0 as least significant bit and odd has 1 as least significant bit
    //2 = 10; 3=11;
    //so we perform bitwise AND and if result is 1 it means the number is Odd
    //no need to convert in binary just perform &

    if(num&1 == 1){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even"<<endl;
    }

}