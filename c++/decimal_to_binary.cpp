#include<iostream>
using namespace std;
//(18)10 = (10010)2
//divide 18 by highest power of 2 < 18
//quotient = 1
//divide remainder(2) by next lesser highest power i.e. 8 (16/2)
//quotient = 0
//divide remainder(2) by next lesser highest power i.e. 4 (8/2)
//quotient = 0
//divide remainder(2) by next lesser highest power i.e. 2 (4/2)
//quotient = 1
//divide remainder(0) by next lesser highest power i.e. 1 (2/2)
//quotient = 0

//to get the bits as answer--> ans = ans*10 + quotient

int convert(int n){
    //to get highest power of 2 < 18
    int x = 1;
    int quotient = 0;
    int ans = 0;
    int remainder = 0;
    while(x<n){
        x*=2;
    }
    x/=2;  //we got 16
    while(x>0){
        quotient = n/x; 
        ans = ans*10 + quotient; //note this
        remainder = n - x*quotient;
        n = remainder;
        x/=2;
    }
    return ans;
}


int main(){
    int num;
    cin>>num;
    cout<<convert(num);
}