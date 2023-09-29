#include<iostream>
using namespace std;
//(96)10 = (140)8
//divide 96 by highest power of 8 < 96
//quotient = 1
//divide remainder(32) by next lesser highest power i.e. 8 (64/8)
//quotient = 4
//divide remainder(0) by next lesser highest power i.e. 1 (8/8)
//quotient = 0

//ans = ans*10 + quotient

int convert(int n){
    int quotient;
    int remainder;
    int ans = 0;
    int x=1;
    while(x<n){
        x*=8;
    }
    x/=8;
    while(x>0){
    quotient = n/x;
    remainder = n - quotient*x;
    ans = ans*10 + quotient;
    n = remainder;
    x/=8;
    }
    return ans;

}
int main(){
    int num;
    cin>>num;
    cout<<convert(num);
}